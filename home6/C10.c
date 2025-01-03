#include <stdio.h>

// Функция для вывода всех простых множителей числа n
void print_simple(int n) {
    // Ищем множители, начиная с 2
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {  // Пока число делится на i
            printf("%d ", i);  // Выводим множитель
            n /= i;  // Уменьшаем число
        }
    }

    // Если число n больше 1, то это простое число
    if (n > 1) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;

    // Чтение числа
    scanf("%d", &n);

    // Печать простых множителей
    print_simple(n);

    return 0;
}


//C10
