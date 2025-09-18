#include <iostream>
#include "include/is_valid.h"
#include <string>


int main(int argc, char * argv[]) {
    std::string line;
    int size;

    std::cout << "Введите стоку для обработки (длина строки от 0 до 100 символов)" << std::endl;
    std::cin >> line; 

    size = line.length();

    if (size > 100) {
        std::cout << "Строка превосходи ограничения!" << std::endl;
        return 0;
    }

    std::cout << std::boolalpha;
    std::cout << "Результат: " << is_valid(line) << std::endl;

    return 0;
}