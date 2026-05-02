# colorc
C/C++でANSIエスケープコードを簡単に扱うためのライブラリです。

## 使い方
1. color.hとdecoration.hをプロジェクトに追加します。
2. ヘッダーファイルをインクルードします。
```c
#include <stdio.h>
#include "color.h"
#include "decoration.h"

int main() {
    printf(RED "Hello, World!" RESET "\n");
    printf(BOLD BLUE "This is bold blue text." RESET "\n");
    return 0;
}
```

```cpp
#include <iostream>
#include "color.h"
#include "decoration.h"

int main() {
    std::cout << RED << "Hello, World!" << RESET << std::endl;
    std::cout << BOLD << BLUE << "This is bold blue text." << RESET << std::endl;
    return 0;
}
```
3. コンパイルして実行します。

## 対応している色と装飾
- 色: 黒(BLACK)、赤(RED)、緑(GREEN)、黄色(YELLOW)、青(BLUE)、マゼンタ(MAGENTA)、シアン(CYAN)、白(WHITE)
- 装飾: 太字(BOLD)、斜体(ITALIC)、下線(UNDERLINE)、点滅(BLINK)、反転(INVERT)

## ライセンス
このプロジェクトはMITライセンスの下で公開されています。詳細はLICENSEファイルを参照してください。
