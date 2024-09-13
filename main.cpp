#include <iostream>
#include "solution.cpp"

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::cin >> input;

    std::string output = swapAB(input);
    std::cout << "Результат: " << output << std::endl;

    return 0;
}