#include <stdio.h>
#include <stdlib.h>

// Функция для получения произведения нечетных цифр числа
int product_of_odd_digits(int num) {
    int product = 1;
    int has_odd_digit = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {  // Проверяем, нечетная ли цифра
            product *= digit;
            has_odd_digit = 1;
        }
        num /= 10;
    }

    // Если не было нечетных цифр, возвращаем 1
    return has_odd_digit ? product : 1;
}

// Функция для получения произведения четных цифр числа
int product_of_even_digits(int num) {
    int product = 1;
    int has_even_digit = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {  // Проверяем, четная ли цифра
            product *= digit;
            has_even_digit = 1;
        }
        num /= 10;
    }

    // Если не было четных цифр, возвращаем 0
    return has_even_digit ? product : 0;
}

int main() {
    int arr[10];
    int even_count = 0, odd_count = 0;

    // Ввод массива
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Замена элементов в массиве в зависимости от подсчитанных четных и нечетных чисел
    for (int i = 0; i < 10; i++) {
        if (even_count > odd_count) {
            // Если четных больше, заменяем нечетные числа на произведение нечетных цифр
            if (arr[i] % 2 != 0) {
                arr[i] = product_of_odd_digits(arr[i]);
            }
        } else {
            // Если нечетных больше или их количество равно количеству четных, заменяем четные числа на произведение четных цифр
            if (arr[i] % 2 == 0) {
                arr[i] = product_of_even_digits(arr[i]);
            }
        }
    }

    // Выводим результат
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//F20
