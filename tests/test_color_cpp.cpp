// テスト（C++）
#include <iostream>
#include "../include/color.h"
#include "../include/decoration.h"

int main() {
    std::cout << RED << "Hello, World!" << RESET << std::endl;
    std::cout << BOLD << BLUE << "This is bold blue text." << RESET << std::endl;

    return 0;
}