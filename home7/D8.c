#include <stdio.h>

// Рекурсивная функция для печати чисел от A до B
void print_numbers(int A, int B) {
    // Базовый случай: если A > B, завершаем рекурсию
    if (A > B) {
        return;
    }
    
    // Печатаем текущее число A
    printf("%d ", A);

    // Рекурсивно вызываем для следующего числа
    print_numbers(A + 1, B);
}

void print_numbers_reverse(int A, int B) {
    // Базовый случай: если A < B, завершаем рекурсию
    if (A < B) {
        return;
    }
    
    // Печатаем текущее число A
    printf("%d ", A);

    // Рекурсивно вызываем для следующего числа
    print_numbers_reverse(A - 1, B);
}

int main() {
    int A, B;

    // Вводим два целых числа
    scanf("%d %d", &A, &B);

    if (A < B) {
        // Печатаем числа от A до B в порядке возрастания
        print_numbers(A, B);
    } else {
        // Печатаем числа от A до B в порядке убывания
        print_numbers_reverse(A, B);
    }

    return 0;
}

//D8