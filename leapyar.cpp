#include <iostream>

int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    // Input
    bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    // Display
    if (isLeapYear) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
