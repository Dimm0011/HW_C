#include <stdio.h>
#include <ctype.h>  // Для функций islower и isupper

int main() {
    char str[10001];  // Массив для строки (максимум 10 000 символов + 1 для завершающего нуля)
    int lowercase_count = 0;  // Счетчик для строчных букв
    int uppercase_count = 0;  // Счетчик для заглавных букв

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Проходим по каждому символу строки и считаем строчные и заглавные буквы
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            lowercase_count++;
        } else if (isupper(str[i])) {
            uppercase_count++;
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%d %d\n", lowercase_count, uppercase_count);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}

//G7
