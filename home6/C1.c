#include <stdio.h>

// Функция для вычисления модуля числа
int absolute_value(int num) {
    if (num < 0) {
        return -num;  // Если число отрицательное, возвращаем его противоположное значение
    }
    return num;  // Если число положительное или ноль, возвращаем его без изменений
}

int main() {
    int n;
    // Чтение целого числа
    scanf("%d", &n);

    // Вывод модуля числа
    printf("%d\n", absolute_value(n));

    return 0;
}

//C1
