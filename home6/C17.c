#include <stdio.h>

// Функция для проверки, что сумма цифр равна произведению цифр
int is_happy_number(int n) {
    int sum = 0;       // Переменная для хранения суммы цифр
    int product = 1;   // Переменная для хранения произведения цифр

    // Обрабатываем все цифры числа
    while (n > 0) {
        int digit = n % 10;  // Получаем последнюю цифру
        sum += digit;        // Добавляем цифру к сумме
        product *= digit;    // Умножаем цифру на произведение
        n /= 10;             // Убираем последнюю цифру из числа
    }

    // Сравниваем сумму и произведение
    if (sum == product) {
        return 1;  // YES
    } else {
        return 0;  // NO
    }
}

int main() {
    int number;

    // Ввод числа
    scanf("%d", &number);

    // Проверка и вывод результата
    if (is_happy_number(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//C17
