#include <stdio.h>

int main() {
    int arr[10];

    // Считываем массив из 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Массив для хранения чисел, у которых вторая с конца цифра - ноль
    int result[10];
    int result_size = 0;

    // Проверяем числа и добавляем в result, если выполняется условие
    for (int i = 0; i < 10; i++) {
        int number = arr[i];

        // Проверка второй с конца цифры числа (десятки)
        if ((number / 10) % 10 == 0) {
            result[result_size++] = number;
        }
    }

    // Выводим результат
    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

//E13
