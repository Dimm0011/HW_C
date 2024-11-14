#include <stdio.h>

int main() {
    int a, b, c, d, e;

    // Ввод пяти чисел
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Находим максимальное число среди пяти
    int max = a;  // Инициализируем max первым числом

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    // Выводим наибольшее число
    printf("%d\n", max);

    return 0;
}
//A9