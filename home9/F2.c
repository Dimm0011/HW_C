#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int even[n], odd[n];
    int even_count = 0, odd_count = 0;

    // Разделение чисел на четные и нечетные
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[even_count++] = a[i];
        } else {
            odd[odd_count++] = a[i];
        }
    }

    // Копирование четных чисел в начало массива
    for (int i = 0; i < even_count; i++) {
        a[i] = even[i];
    }

    // Копирование нечетных чисел в конец массива
    for (int i = 0; i < odd_count; i++) {
        a[even_count + i] = odd[i];
    }
}

//F2
