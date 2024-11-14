#include <stdio.h>

int main() {
    int a, b, c, d, e;

    // Ввод пяти чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Инициализация переменных для максимума и минимума
    int max = a, min = a;

    // Находим максимум
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    // Находим минимум
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;

    // Выводим сумму максимума и минимума
    printf("%d\n", max + min);

    return 0;
}
