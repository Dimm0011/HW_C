#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел
    int sum = 0;  // Переменная для хранения суммы положительных чисел

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    // Подсчёт суммы положительных чисел
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > 0) {
            sum += arr[i];  // Добавляем положительное число к сумме
        }
    }

    // Вывод суммы положительных чисел
    printf("%d\n", sum);

    return 0;
}

//E5
