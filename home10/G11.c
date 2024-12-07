#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE + 1];  // Строка для хранения данных
    int count = 0;  // Счетчик слов, заканчивающихся на 'a'

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

    // Проверяем каждое слово
    while (word != NULL) {
        // Если слово заканчивается на 'a', увеличиваем счетчик
        if (word[strlen(word) - 1] == 'a') {
            count++;
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

    // Записываем результат в файл
    fprintf(outfile, "%d", count);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}
