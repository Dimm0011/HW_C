#include <stdio.h>

// Рекурсивная функция для вывода простых множителей
void print_prime_factors(int n, int divisor) {
    // Базовый случай: если n меньше divisor, завершаем рекурсию
    if (n < divisor) {
        return;
    }

    // Если число делится на divisor, выводим divisor и рекурсивно продолжаем для n / divisor
    while (n % divisor == 0) {
        printf("%d ", divisor);
        n /= divisor;
    }

    // Рекурсивно продолжаем для следующего возможного делителя (начиная с 2)
    print_prime_factors(n, divisor + 1);
}

int main() {
    int n;

    // Ввод числа
    scanf("%d", &n);

    // Выводим все простые множители
    print_prime_factors(n, 2);

    return 0;
}

//D13
