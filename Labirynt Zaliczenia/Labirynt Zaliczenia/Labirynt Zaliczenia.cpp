#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <thread>
#ifdef _WIN32
#include <conio.h>
#else
#include <unistd.h>
#include <termios.h>
#endif

using namespace std;

const int rows = 10;
const int cols = 20;

char labyrinth[rows][cols];

enum Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN
};

struct Point {
    int row, col;
};

// Funkcja do generowania labiryntu za pomocą algorytmu głębokości
void generateLabyrinth() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            labyrinth[i][j] = '#';
        }
    }

    srand(time(0));

    stack<Point> pathStack;
    Point start = { 1, 1 };
    pathStack.push(start);
    labyrinth[start.row][start.col] = '$';

    while (!pathStack.empty()) {
        Point current = pathStack.top();
        int currentRow = current.row;
        int currentCol = current.col;

        Direction nextDirection = static_cast<Direction>(rand() % 4);
        bool moved = false;

        for (int i = 0; i < 4; ++i) {
            int nextRow = currentRow;
            int nextCol = currentCol;

            switch (nextDirection) {
            case LEFT:
                nextCol -= 2;
                break;
            case RIGHT:
                nextCol += 2;
                break;
            case UP:
                nextRow -= 2;
                break;
            case DOWN:
                nextRow += 2;
                break;
            }

            if (nextRow >= 0 && nextRow < rows && nextCol >= 0 && nextCol < cols && labyrinth[nextRow][nextCol] == '#') {
                labyrinth[nextRow][nextCol] = ' ';
                labyrinth[nextRow + (currentRow - nextRow) / 2][nextCol + (currentCol - nextCol) / 2] = ' ';
                pathStack.push({ nextRow, nextCol });
                moved = true;
                break;
            }

            nextDirection = static_cast<Direction>((nextDirection + 1) % 4);
        }

        if (!moved) {
            pathStack.pop();
        }
    }

    // Losowy punkt docelowy
    Point end = { rand() % (rows - 2) + 1, rand() % (cols - 2) + 1 };
    labyrinth[end.row][end.col] = '@';
}

// Funkcja do wyświetlania labiryntu
void displayLabyrinth(int playerRow, int playerCol) {
#ifdef _WIN32
    system("CLS");
#else
    cout << "\033[H\033[J";
#endif

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << labyrinth[i][j] << ' ';
        }
        cout << endl;
    }
}

// Funkcja do przesuwania gracza w zadanym kierunku
Point movePlayer(char maze[rows][cols], int startRow, int startCol, char direction) {
    switch (direction) {
    case 'l':
        if (startCol > 0 && maze[startRow][startCol - 1] != '#') {
            return { startRow, startCol - 1 };
        }
        break;
    case 'p':
        if (startCol < cols - 1 && maze[startRow][startCol + 1] != '#') {
            return { startRow, startCol + 1 };
        }
        break;
    case 'g':
        if (startRow > 0 && maze[startRow - 1][startCol] != '#') {
            return { startRow - 1, startCol };
        }
        break;
    case 'd':
        if (startRow < rows - 1 && maze[startRow + 1][startCol] != '#') {
            return { startRow + 1, startCol };
        }
        break;
    }
    return { startRow, startCol };
}

// Funkcja do pobierania pojedynczego znaku (bez konieczności naciśnięcia Enter)
char getKeyPress() {
#ifdef _WIN32
    return _getch();
#else
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
#endif
}

// Prosta funkcja do wyświetlania strony startowej
void showStartScreen() {
    cout << "*************************************************" << endl;
    cout << "*             LABIRYNT ZALICZENIA               *" << endl;
    cout << "*************************************************" << endl;
    cout << "*        Witam w labiryncie zaliczenia!         *" << endl;
    cout << "*       Gracz jest oznaczony za pomoca !        *" << endl;
    cout << "*    Zaliczysz labirynt kiedy dotrzesz do @     *" << endl;
    cout << "*       Sterowanie jest bardzo proste           *" << endl;
    cout << "*    l - lewo p - prawo g - gora d - dol        *" << endl;
    cout << "*    Aby wygenerowac labirynt nacisnij spacje   *" << endl;
    cout << "*   Aby zaczac gre nacisnij spacje jeszcze raz  *" << endl;
    cout << "*************************************************" << endl;

    while (getKeyPress() != ' ') {
        // czeka na spacje
    }
}

// Funkcja do wyświetlania strony końcowej z ASCII art i pytaniem o kontynuację
bool showEndScreen() {
    cout << "*************************************************" << endl;
    cout << "*      GRATULACJE OTRZYMAŁEŚ ZALICZENIE         *" << endl;
    cout << "*************************************************" << endl;
    cout << "*      Chcesz zagrać jeszcze raz? (Y/N):        *" << endl;
    cout << "*************************************************" << endl;

    char response = toupper(getKeyPress());

    return (response == 'Y');
}

int main() {
    srand(time(0));

    // Wyświetla stronę startową
    showStartScreen();

    do {
        generateLabyrinth();

        char player = '$';
        int playerRow, playerCol;

        // Znajduje początkowe położenie gracza
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (labyrinth[i][j] == player) {
                    playerRow = i;
                    playerCol = j;
                    break;
                }
            }
        }

        char move;
        do {
            displayLabyrinth(playerRow, playerCol);

            move = getKeyPress();

            if (move == ' ') {
                // Po wciśnięciu spacji zamień '$' na '!'
                labyrinth[playerRow][playerCol] = '!';
                break;
            }

        } while (true);

        do {
            displayLabyrinth(playerRow, playerCol);

            move = getKeyPress();

            if (move == 'l' || move == 'p' || move == 'g' || move == 'd') {
                labyrinth[playerRow][playerCol] = ' ';
                Point newPosition = movePlayer(labyrinth, playerRow, playerCol, move);
                playerRow = newPosition.row;
                playerCol = newPosition.col;

                if (labyrinth[playerRow][playerCol] == '@') {
                    labyrinth[playerRow][playerCol] = 'W'; // Zmiana oznaczenia po dotarciu do celu
                    displayLabyrinth(playerRow, playerCol);
                    break;
                }

                labyrinth[playerRow][playerCol] = '!';
            }

        } while (true);

    } while (showEndScreen());

    return 0;
}
