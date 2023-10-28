#include <iostream>
#include <vector>


int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int numRows;

   
    std::cout << "Podaj liczbe wierszy trojkata Pascala: ";
    std::cin >> numRows;

  
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows - i - 1; j++) {
            std::cout << "  "; 
        }
        for (int j = 0; j <= i; j++) {
            std::cout << binomialCoefficient(i, j) << "   "; 
        }
        std::cout << std::endl;
    }

    return 0;
}