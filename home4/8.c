#include <stdio.h>

int main() {
    int a, b, c, d, e;

    // Ввод пяти чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Находим минимальное число среди пяти
    int min = a;  // Инициализируем min первым числом

    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;

    // Выводим наименьшее число
    printf("%d\n", min);

    return 0;
}
//A10
