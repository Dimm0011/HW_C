#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Читаем символы до точки
    while (1) {
        ch = getchar();  // Считываем символ

        if (ch == '.')  // Если символ - точка, завершаем ввод
            break;

        // Преобразуем символ в строчную букву, если это заглавная буква
        putchar(tolower(ch));
    }
    return 0;
}

//B21
