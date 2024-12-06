#include <stdio.h>
#include <stdlib.h>  // Для функции abs()

int count_bigger_abs(int n, int a[]) {
    int max_abs = 0;

    // Находим максимальный элемент по модулю
    for (int i = 0; i < n; ++i) {
        if (a[i] > max_abs) {
            max_abs = abs(a[i]);
        }
    }

    // Считаем, сколько элементов превосходят по модулю максимальный элемент
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (abs(a[i]) > max_abs) {
            ++count;
        }
    }

    return count;
}
/*
int main() {
    // Пример массива
    int arr[] = {1, -20, 3, 4, -50, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Вызов функции и вывод результата
    int result = count_bigger_abs(size, arr);
    printf("%d\n", result);  // Выводим результат

    return 0;
}
*/


//F15
