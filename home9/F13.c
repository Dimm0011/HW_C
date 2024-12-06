#include <stdio.h>

int count_between(int from, int to, int size, int a[]) {
    int count = 0;

    // Проходим по всем элементам массива
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {  // Если элемент лежит в интервале [from, to]
            count++;  // Увеличиваем счетчик
        }
    }

    return count;  // Возвращаем количество подходящих элементов
}
/*
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int from = 4, to = 6;

    // Вызов функции и вывод результата
    int result = count_between(from, to, size, arr);
    printf("%d\n", result);  // Ожидаемый результат: 3

    return 0;
}
*/

//F13
