#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ALPHABET_SIZE 26

int main() {
    char word1[101], word2[101];
    int count1[ALPHABET_SIZE] = {0};  // Частота букв в первом слове
    int count2[ALPHABET_SIZE] = {0};  // Частота букв во втором слове

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Считывание двух слов из файла
    fscanf(infile, "%s %s", word1, word2);
    fclose(infile);

    // Подсчет частоты букв в первом слове
    for (int i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }

    // Подсчет частоты букв во втором слове
    for (int i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }

    // Массив для хранения результатов
    char result[ALPHABET_SIZE];
    int result_count = 0;

    // Ищем буквы, которые встречаются в обоих словах ровно 1 раз
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[result_count++] = 'a' + i;
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл, если есть совпадения
    if (result_count > 0) {
        // Сортировка букв в лексикографическом порядке (они уже отсортированы по алфавиту)
        for (int i = 0; i < result_count; i++) {
            fprintf(outfile, "%c", result[i]);
            if (i < result_count - 1) {
                fprintf(outfile, " ");
            }
        }
    }

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}
//G4
