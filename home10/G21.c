#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Открываем файлы
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        fprintf(stderr, "Ошибка при открытии файлов\n");
        return 1;
    }

    // Читаем данные из input.txt
    char line[10000];
    int starCount = 0;

    // Чтение всех строк и подсчет звездочек
    while (fgets(line, sizeof(line), input)) {
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] == '*') {
                starCount++;
            }
        }
    }

    // Проверка, можно ли составить равносторонний треугольник
    int n = 1;
    while (n * (n + 1) / 2 < starCount) {
        n++;
    }

    if (n * (n + 1) / 2 != starCount) {
        fprintf(output, "NO\n");
        fclose(input);
        fclose(output);
        return 0;
    }

    // Формирование треугольника
    int starsUsed = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            fprintf(output, " ");
        }
        for (int j = 0; j < i; j++) {
            fprintf(output, "*");
            if (j < i - 1) {
                fprintf(output, " ");
            }
        }
        fprintf(output, "\n");
        starsUsed += i;
    }

    // Закрытие файлов
    fclose(input);
    fclose(output);

    return 0;
}


//G21
