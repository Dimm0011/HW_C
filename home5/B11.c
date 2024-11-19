#include <stdio.h>

int main() {
    int num;
    int reversed = 0;

    // Вводим целое неотрицательное число
    scanf("%d", &num);

    // Переворачиваем число
    while (num != 0) {
        reversed = reversed * 10 + num % 10; // Берем последнюю цифру и добавляем её в результат
        num /= 10; // Убираем последнюю цифру из числа
    }

    // Выводим перевёрнутое число
    printf("%d\n", reversed);

    return 0;
}

//B11