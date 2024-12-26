// temp_api.c
#include "temp_api.h"
#include <limits.h>

// Функция для вычисления средней температуры за месяц
float average_month_temperature(TemperatureRecord *records, int record_count, int month) {
    int sum = 0, count = 0;

    for (int i = 0; i < record_count; i++) {
        if (records[i].month == month) {
            sum += records[i].temperature;
            count++;
        }
    }

    return (count == 0) ? 0 : (float)sum / count;
}

// Функция для нахождения минимальной температуры за месяц
int min_month_temperature(TemperatureRecord *records, int record_count, int month) {
    int min_temp = INT_MAX;

    for (int i = 0; i < record_count; i++) {
        if (records[i].month == month && records[i].temperature < min_temp) {
            min_temp = records[i].temperature;
        }
    }

    return (min_temp == INT_MAX) ? 0 : min_temp;
}

// Функция для нахождения максимальной температуры за месяц
int max_month_temperature(TemperatureRecord *records, int record_count, int month) {
    int max_temp = INT_MIN;

    for (int i = 0; i < record_count; i++) {
        if (records[i].month == month && records[i].temperature > max_temp) {
            max_temp = records[i].temperature;
        }
    }

    return (max_temp == INT_MIN) ? 0 : max_temp;
}

// Функция для вычисления средней температуры за год
float average_year_temperature(TemperatureRecord *records, int record_count) {
    int sum = 0, count = 0;

    for (int i = 0; i < record_count; i++) {
        sum += records[i].temperature;
        count++;
    }

    return (count == 0) ? 0 : (float)sum / count;
}

// Функция для нахождения минимальной температуры за год
int min_year_temperature(TemperatureRecord *records, int record_count) {
    int min_temp = INT_MAX;

    for (int i = 0; i < record_count; i++) {
        if (records[i].temperature < min_temp) {
            min_temp = records[i].temperature;
        }
    }

    return (min_temp == INT_MAX) ? 0 : min_temp;
}

// Функция для нахождения максимальной температуры за год
int max_year_temperature(TemperatureRecord *records, int record_count) {
    int max_temp = INT_MIN;

    for (int i = 0; i < record_count; i++) {
        if (records[i].temperature > max_temp) {
            max_temp = records[i].temperature;
        }
    }

    return (max_temp == INT_MIN) ? 0 : max_temp;
}
