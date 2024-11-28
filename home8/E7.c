#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    // Инвертируем первую половину массива (с 0 по 4 элемент)
    for (int i = 0, j = 4; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Инвертируем вторую половину массива (с 5 по 9 элемент)
    for (int i = 5, j = 9; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Выводим изменённый массив
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//E7
