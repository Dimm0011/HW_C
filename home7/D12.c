#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Ввод числа n

    int count = 0;  // Счетчик выведенных чисел

    // Один цикл для вывода последовательности
    for (int i = 1; count < n; i++) {
        for (int j = 0; j < i && count < n; j++) {
            printf("%d ", i);  // Выводим число i
            count++;  // Увеличиваем счетчик выведенных чисел
        }
    }

    return 0;
}

//D12
