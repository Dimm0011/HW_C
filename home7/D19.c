#include <stdio.h>

int acounter(void) {
    char c = getchar();  // Читаем следующий символ

    if (c == '.')  // Если достигнут конец строки
        return 0;

    // Если символ 'a', возвращаем 1 и рекурсивно продолжаем
    if (c == 'a')
        return 1 + acounter();

    // В любом другом случае продолжаем рекурсию без увеличения счетчика
    return acounter();
}

int main() {
    // Ввод строки и вызов рекурсивной функции
    printf("%d\n", acounter());

    return 0;
}

//D19
