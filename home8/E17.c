#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел
    int count[1001] = {0};  // Массив для подсчета вхождений чисел (от -500 до 500, индексируем с 500)

    // Считываем 10 чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        count[arr[i] + 500]++;  // Сдвигаем числа на 500, чтобы индексировать от 0
    }

    // Выводим числа, которые встречаются только один раз
    for (int i = 0; i < 10; i++) {
        if (count[arr[i] + 500] == 1) {  // Если число встречается ровно один раз
            printf("%d ", arr[i]);
            count[arr[i] + 500] = 0;  // Убираем это число, чтобы не вывести его снова
        }
    }

    printf("\n");
    return 0;
}

//E17
