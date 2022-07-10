#include <iostream>

int main() {
    int favorite_number;

    std::cout << "Select a number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "The number you selected is " << favorite_number << "." << std::endl;

    return 0;
}