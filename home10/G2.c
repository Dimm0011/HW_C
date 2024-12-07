#include <stdio.h>

int main() {
    int N;

    // Открываем файл для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение значения N
    fscanf(infile, "%d", &N);
    fclose(infile);  // Закрытие файла после чтения

    // Массив для хранения результата
    char result[N + 1];  // Плюс 1 для завершающего нуля

    // Буквы от A до Z
    char letter = 'A';
    // Четные цифры: 2, 4, 6, 8
    int digit = 2;

    // Заполняем строку по заданным правилам
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {  // Нечетная позиция (0-based, это первая, третья, пятая и т.д.)
            result[i] = letter;
            letter++;  // Переход к следующей букве
        } else {  // Четная позиция (0-based, это вторая, четвертая и т.д.)
            result[i] = '0' + digit;
            digit += 2;  // Переход к следующей четной цифре

            // Если цифра больше 8, сбрасываем её на 2
            if (digit > 8) {
                digit = 2;
            }
        }
    }

    result[N] = '\0';  // Завершаем строку нулевым символом

    // Открываем файл для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%s", result);
    fclose(outfile);  // Закрытие файла после записи

    return 0;
}


//G2
