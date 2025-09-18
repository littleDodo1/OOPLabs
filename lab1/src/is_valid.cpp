#include "../include/is_valid.h"
#include <string>

bool is_valid(std::string s) {
    int stack = 0;

    for (char elem : s) {
        if (elem == '(') stack++;
        else if (elem == ')') stack--;
        else return false;

        if (stack < 0) return false;
    }

    return stack == 0;
}