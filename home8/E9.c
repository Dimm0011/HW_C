#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел
    int temp;  // Временная переменная для хранения последнего элемента

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    // Запоминаем последний элемент массива
    temp = arr[9];

    // Сдвигаем все элементы вправо на 1
    for (int i = 8; i >= 0; --i) {
        arr[i + 1] = arr[i];
    }

    // Помещаем последний элемент в начало массива
    arr[0] = temp;

    // Выводим результат
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//E9
