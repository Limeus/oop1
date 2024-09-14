#include <iostream>
#include "solution.cpp"

int main() {
    std::string input;
    std::cout << "Input the string: ";
    std::cin >> input;

    std::string output = swapAB(input);
    std::cout << "Result: " << output << std::endl;

    return 0;
}