// テスト（C言語）
#include <stdio.h>
#include "../include/color.h"
#include "../include/decoration.h"

int main() {
    printf(RED "Hello, World!" RESET "\n");
    printf(BOLD BLUE "This is bold blue text." RESET "\n");
    return 0;
}