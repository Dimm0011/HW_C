#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char full_name[MAX_SIZE + 1];  // Строка для хранения полного имени

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(full_name, sizeof(full_name), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    full_name[strcspn(full_name, "\n")] = '\0';

    // Разбиение строки на фамилию, имя и отчество
    char *last_name = strtok(full_name, " ");
    char *first_name = strtok(NULL, " ");
    char *patronymic = strtok(NULL, " ");  // Отчество, но оно нам не нужно

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем приветствие в файл
    fprintf(outfile, "Hello, %s %s!\n", first_name, last_name);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}

//G14
