#include <stdio.h>

int main() {
    int arr[5];  // Массив для хранения 5 чисел
    int min;     // Переменная для хранения минимального значения

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);  // Считываем элементы массива
    }

    // Инициализация минимального элемента первым значением массива
    min = arr[0];

    // Поиск минимального элемента
    for (int i = 1; i < 5; ++i) {
        if (arr[i] < min) {
            min = arr[i];  // Обновляем минимальное значение
        }
    }

    // Выводим минимальное значение
    printf("%d\n", min);

    return 0;
}

//E2
