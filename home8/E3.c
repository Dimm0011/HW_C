#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел
    int max, min;  // Переменные для хранения максимального и минимального значений
    int maxIndex, minIndex;  // Переменные для хранения индексов максимума и минимума

    // Ввод чисел с клавиатуры
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    // Инициализация максимума и минимума первым элементом массива
    max = arr[0];
    min = arr[0];
    maxIndex = 1;  // Индексы начинаются с 1, как указано в примере
    minIndex = 1;

    // Поиск максимума и минимума, а также их индексов
    for (int i = 1; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i + 1;  // Индексация с 1
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i + 1;  // Индексация с 1
        }
    }

    // Вывод результатов
    printf("%d %d %d %d\n", maxIndex, max, minIndex, min);

    return 0;
}

//E3
