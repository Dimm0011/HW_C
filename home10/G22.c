#include <stdio.h>
#include <string.h>

char soundex_map(char c) {
    // Возвращаем цифру, соответствующую букве
    switch (c) {
        case 'b': case 'f': case 'p': case 'v': return '1';
        case 'c': case 'g': case 'j': case 'k': case 'q': case 's': case 'x': case 'z': return '2';
        case 'd': case 't': return '3';
        case 'l': return '4';
        case 'm': case 'n': return '5';
        case 'r': return '6';
        default: return '\0'; // Гласные или другие символы, которые игнорируются
    }
}

int main() {
    char word[21]; // Максимальная длина слова 20 символов + 1 для \0
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    // Считываем слово из файла
    fgets(word, sizeof(word), input);
    fclose(input);

    // Убираем символ новой строки, если он присутствует
    word[strcspn(word, "\n")] = '\0';

    // Делаем первую букву заглавной, она не меняется
    char result[5] = {0};
    result[0] = word[0];

    int result_len = 1;  // Длина текущего результата (уже есть первая буква)

    // Перебираем остальные символы
    char prev_digit = '\0';
    for (int i = 1; word[i] != '\0'; ++i) {
        // Пропускаем гласные
        char digit = soundex_map(word[i]);

        // Если это не гласная и не пустой символ
        if (digit != '\0') {
            // Если предыдущая цифра такая же, пропускаем
            if (digit != prev_digit) {
                result[result_len++] = digit;
                prev_digit = digit;
            }
        }
    }

    // Обрезаем строку до 4 символов
    result[4] = '\0';
    if (result_len < 4) {
        // Добавляем нули, если результат короче 4 символов
        while (result_len < 4) {
            result[result_len++] = '0';
        }
    }

    // Записываем результат в выходной файл
    fputs(result, output);
    fclose(output);

    return 0;
}

//G22
