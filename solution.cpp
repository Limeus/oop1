#include <string>

std::string swapAB(const std::string& input) {
    std::string result = input; // Создаем копию исходной строки

    for (char& ch : result) {
        if (ch == 'a') {
            ch = 'b'; // Заменяем 'a' на 'b'
        } else if (ch == 'b') {
            ch = 'a'; // Заменяем 'b' на 'a'
        }
        // Если символ 'c', ничего не делаем
    }

    return result;
}

