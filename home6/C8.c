#include <stdio.h>
#include <ctype.h>  // Для функции toupper

// Функция для перевода всех строчных букв в заглавные
void to_uppercase() {
    char c;

    // Чтение символов до точки
    while ((c = getchar()) != '.') {
        // Преобразуем символ в заглавную букву, если это строчная
        putchar(toupper(c));
    }
}

int main() {
    // Вызов функции для обработки строки
    to_uppercase();

    return 0;
}


//C8
