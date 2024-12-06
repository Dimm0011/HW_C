#include <stdio.h>
#include <string.h>

void pack_string(char *str) {
    int len = strlen(str);

    // Преобразуем строку, исключая точку в конце
    for (int i = 0; i < len - 1; i++) {
        int count = 1;  // Счётчик повторений
        // Пока следующий символ такой же, увеличиваем счётчик
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        // Выводим символ и его количество
        printf("%c%d", str[i], count);
    }
    // Строка всегда заканчивается точкой, которую нужно проигнорировать
}

int main() {
    char str[1001];  // Строка не более 1000 символов + 1 для точки
    // Ввод строки
    scanf("%s", str);

    // Вызываем функцию упаковки строки
    pack_string(str);

    return 0;
}

//F10
