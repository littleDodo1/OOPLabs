#include <iostream>
#include "include/is_valid.h"
#include <string>


int main(int argc, char * argv[]) {
    std::string line;

    std::cout << "Введите строку для обработки" << std::endl;
    std::cin >> line; 

    std::cout << std::boolalpha;
    std::cout << "Результат: " << is_valid(line) << std::endl;

    return 0;
}