#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0; // Счетчик для количества выведенных элементов
    int i = 1; // Текущее число
    int j = 0; // Счетчик повторений текущего числа

    for (; count < n; ) {
        // Печатаем текущее число i
        printf("%d ", i);
        count++;
        j++;

        // Если j равно i, переходим к следующему числу
        if (j == i) {
            i++;
            j = 0; // Сбрасываем счетчик повторений
        }
    }

    return 0;
}
