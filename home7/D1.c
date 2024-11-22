#include <stdio.h>

// Рекурсивная функция для печати чисел от 1 до N
void print_numbers(int n) {
    if (n > 0) {
        print_numbers(n - 1);  // Рекурсивный вызов с уменьшением числа
        printf("%d ", n);       // Печать текущего числа
    }
}

int main() {
    int n;

    // Ввод числа N
    scanf("%d", &n);

    // Вызов функции для печати чисел от 1 до N
    print_numbers(n);

    return 0;
}

//D1