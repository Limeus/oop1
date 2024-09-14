#include <string>

std::string swapAB(const std::string& input) {
    std::string result = input;

    for (char& ch : result) {
        if (ch == 'a') {
            ch = 'b';
        } else if (ch == 'b') {
            ch = 'a';
        }
    }

    return result;
}

