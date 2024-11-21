#include <stdio.h>

int f(int x) {
    if (x >= -2 && x < 2) {
        return x * x;  // f(x) = x^2 при -2 ≤ x < 2
    } else if (x >= 2) {
        return x * x + 4 * x + 5;  // f(x) = x^2 + 4x + 5 при x ≥ 2
    } else {
        return 4;  // f(x) = 4 при x < -2
    }
}

int main() {
    int x, max_value = -2147483648;  // Инициализация максимально возможным значением (для сравнения)

    // Ввод чисел
    while (1) {
        scanf("%d", &x);  // Считываем очередное число
        if (x == 0) {
            break;  // Завершаем цикл, если введён 0
        }

        // Вычисляем значение функции
        int fx = f(x);

        // Обновляем максимальное значение
        if (fx > max_value) {
            max_value = fx;
        }
    }

    // Выводим наибольшее значение
    printf("%d\n", max_value);
    return 0;
}

//C4
