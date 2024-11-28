#include <stdio.h>
#include <math.h>

// Функция для проверки простоты числа
int is_prime(int n) {
    // Число должно быть больше 1, чтобы быть простым
    if (n <= 1) {
        return 0;  // NO
    }

    // 2 — единственное четное простое число
    if (n == 2) {
        return 1;  // YES
    }

    // Проверяем только нечётные делители от 3 до sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // NO
        }
    }

    return 1;  // YES
}

int main() {
    int number;

    // Ввод числа
    scanf("%d", &number);

    // Проверка простоты числа и вывод результата
    if (is_prime(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//C16
