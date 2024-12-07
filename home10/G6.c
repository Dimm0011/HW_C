#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Логическая функция для проверки на палиндром
bool is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;  // Строка не палиндром
        }
    }
    return true;  // Строка палиндром
}

int main() {
    char str[1001];  // Массив для хранения строки (не более 1000 символов)

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Считывание строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Проверка на палиндром
    if (is_palindrome(str)) {
        fprintf(outfile, "YES\n");
    } else {
        fprintf(outfile, "NO\n");
    }

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}

//G6
