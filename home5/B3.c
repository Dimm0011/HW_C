#include <stdio.h>

int main() {
    int a, b, sum = 0;

    // Вводим два целых числа a и b
    scanf("%d %d", &a, &b);

    // Проходим по всем числам от a до b и суммируем их квадраты
    for (int i = a; i <= b; i++) {
        sum += i * i; // Добавляем квадрат числа i к общей сумме
    }

    // Выводим результат
    printf("%d\n", sum);

    return 0;
}
//B3