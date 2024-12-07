#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

// Функция для составления палиндрома
void make_palindrome(char *str, char *result) {
    int count[26] = {0};  // Массив для подсчета частоты каждой буквы (a-z)
    int len = strlen(str);

    // Подсчитываем частоту букв
    for (int i = 0; i < len; i++) {
        count[str[i] - 'a']++;
    }

    char first_half[MAX_SIZE];  // Первая половина палиндрома
    char middle = '\0';         // Центральный символ, если будет

    int index = 0;

    // Строим первую половину палиндрома и определяем центральный символ
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            // Если количество букв нечетное, то добавляем одну в центр
            if (middle == '\0') {
                middle = 'a' + i;  // Центровая буква
            }
        }

        // Добавляем половину букв в первую половину палиндрома
        for (int j = 0; j < count[i] / 2; j++) {
            first_half[index++] = 'a' + i;
        }
    }

    // Заканчиваем строку первой половины
    first_half[index] = '\0';

    // Формируем палиндром
    // Первая половина + центральный символ (если есть) + обратная половина
    strcpy(result, first_half);
    if (middle != '\0') {
        strncat(result, &middle, 1);
    }

    // Добавляем вторую половину в обратном порядке
    int first_half_len = strlen(first_half);
    for (int i = first_half_len - 1; i >= 0; i--) {
        strncat(result, &first_half[i], 1);
    }
}

int main() {
    char input[MAX_SIZE + 1];   // Строка для ввода
    char result[MAX_SIZE + 1];   // Строка для результата

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

    // Составляем палиндром
    make_palindrome(input, result);

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%s", result);
    fclose(outfile);

    return 0;
}

//G19
