#include <iostream>

int main() {
    int n; // Number of terms in the Fibonacci sequence to generate
    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> n;

    long long firstTerm = 0, secondTerm = 1; // Initialize the first two terms of the sequence

    std::cout << "Fibonacci Sequence for the first " << n << " terms:" << std::endl;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            std::cout << firstTerm;
        } else if (i == 1) {
            std::cout << ", " << secondTerm;
        } else {
            long long nextTerm = firstTerm + secondTerm;
            std::cout << ", " << nextTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }

    std::cout << std::endl;

    return 0;
}
