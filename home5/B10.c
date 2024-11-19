#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int prev_digit = a % 10;  // Начальная цифра числа
    a /= 10;

    while (a != 0)
    {
        if (a % 10 >= prev_digit)
        {
            printf("NO\n");
            return 0;  // Прерываем выполнение программы, если цифры не в порядке возрастания
        }
        prev_digit = a % 10;  // Обновляем предыдущую цифру
        a /= 10;
    }

    printf("YES\n");  // Если все цифры проверены и порядок возрастания соблюден
    return 0;
}


//B10
