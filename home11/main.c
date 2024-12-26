// main.c
#include <stdio.h>
#include "temp_api.h"

int main() {
    // Пример создания массива температурных записей
    TemperatureRecord records[] = {
        {2024, 1, 1, 12, 0, -5},
        {2024, 1, 15, 14, 30, 2},
        {2024, 2, 10, 10, 0, -7},
        {2024, 2, 20, 16, 15, 0},
        {2024, 3, 5, 9, 0, 6},
        {2024, 3, 25, 18, 30, 10},
        {2024, 12, 31, 23, 59, -10}
    };

    int record_count = sizeof(records) / sizeof(records[0]);

    // Статистика за месяц
    printf("Average temperature in January: %.2f\n", average_month_temperature(records, record_count, 1));
    printf("Min temperature in January: %d\n", min_month_temperature(records, record_count, 1));
    printf("Max temperature in January: %d\n", max_month_temperature(records, record_count, 1));

    // Статистика за год
    printf("Average temperature for the year: %.2f\n", average_year_temperature(records, record_count));
    printf("Min temperature for the year: %d\n", min_year_temperature(records, record_count));
    printf("Max temperature for the year: %d\n", max_year_temperature(records, record_count));

    return 0;
}
