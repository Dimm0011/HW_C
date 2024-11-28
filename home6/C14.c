#include <stdio.h>

// Функция для вычисления суммы цифр числа
int sum_of_digits(int num) {
    int sum = 0;

    // Цикл для выделения каждой цифры числа
    while (num > 0) {
        sum += num % 10;  // Добавляем последнюю цифру числа к сумме
        num /= 10;         // Убираем последнюю цифру
    }

    return sum;
}

// Логическая функция для проверки, является ли сумма цифр четной
int is_sum_even(int num) {
    int sum = sum_of_digits(num);  // Вычисляем сумму цифр числа
    return sum % 2 == 0;  // Проверяем, четная ли сумма
}

int main() {
    int number;

    // Ввод числа
    scanf("%d", &number);

    // Проверка и вывод результата
    if (is_sum_even(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//C14
