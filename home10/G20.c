#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// Функция для проверки, можно ли составить палиндром
int is_palindrome_possible(char *str) {
    int count[26] = {0};  // Массив для подсчета количества каждой буквы (a-z)

    // Проходим по строке и подсчитываем количество букв (игнорируем пробелы)
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {  // Игнорируем пробелы
            count[str[i] - 'a']++;
        }
    }

    // Проверяем количество букв с нечетным количеством встреч
    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd_count++;
        }
    }

    // Для палиндрома может быть не более одной буквы с нечетным количеством встреч
    return odd_count <= 1;
}

int main() {
    char input[MAX_SIZE + 1];  // Строка для ввода

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(input, sizeof(input), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    input[strcspn(input, "\n")] = '\0';

    // Проверка на возможность составления палиндрома
    if (is_palindrome_possible(input)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//G20
