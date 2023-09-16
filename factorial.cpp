#include <iostream>

int main() {
    int n; 
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long factorial = 1; 

        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        std::cout << "The factorial of " << n << " is " << factorial << std::endl;
    }

    return 0;
}

