#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE + 1];  // Строка для хранения данных
    char longest_word[MAX_SIZE + 1];  // Строка для самого длинного слова
    char temp_word[MAX_SIZE + 1];  // Временная строка для хранения текущего слова
    int max_length = 0;  // Длина самого длинного слова

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    // Разбиваем строку на слова
    char *word = strtok(str, " ");

    while (word != NULL) {
        int length = strlen(word);

        // Если текущее слово длиннее найденного ранее, обновляем результат
        if (length > max_length) {
            max_length = length;
            strcpy(longest_word, word);  // Копируем самое длинное слово
        }

        // Переходим к следующему слову
        word = strtok(NULL, " ");
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем самое длинное слово в файл
    fprintf(outfile, "%s", longest_word);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}
