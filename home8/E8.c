#include <stdio.h>

int main() {
    int arr[12];  // Массив для хранения 12 чисел

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 12; ++i) {
        scanf("%d", &arr[i]);
    }

    // Инвертируем первую треть массива (с 0 по 3 элемент)
    for (int i = 0, j = 3; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Инвертируем вторую треть массива (с 4 по 7 элемент)
    for (int i = 4, j = 7; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Инвертируем третью треть массива (с 8 по 11 элемент)
    for (int i = 8, j = 11; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Выводим изменённый массив
    for (int i = 0; i < 12; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//E8
