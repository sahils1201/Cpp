#include <iostream>

int main() {
    // Declare variables to store the two numbers
    int num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Check if the two numbers are the same
    bool areSame = (num1 == num2);

    // Display the result
    if (areSame) {
        std::cout << "The two numbers are the same." << std::endl;
    } else {
        std::cout << "The two numbers are different." << std::endl;
    }

    return 0;
}
