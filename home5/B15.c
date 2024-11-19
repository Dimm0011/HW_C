#include <stdio.h>

int main() {
    int num;
    int even_count = 0;

    // Чтение чисел до тех пор, пока не встретится 0
    while (1) {
        scanf("%d", &num);  // Считываем следующее число
        if (num == 0) {
            break;  // Если число равно 0, выходим из цикла
        }
        if (num % 2 == 0) {
            even_count++;  // Если число чётное, увеличиваем счётчик
        }
    }

    // Выводим количество чётных чисел
    printf("%d\n", even_count);

    return 0;
}

//B15