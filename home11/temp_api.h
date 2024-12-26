// temp_api.h

#ifndef TEMP_API_H
#define TEMP_API_H

// Структура для хранения данных о температуре
typedef struct {
    int year;      // год
    int month;     // месяц
    int day;       // день
    int hour;      // час
    int minute;    // минута
    int temperature;  // температура
} TemperatureRecord;

// Прототипы функций для получения статистики
float average_month_temperature(TemperatureRecord *records, int record_count, int month);
int min_month_temperature(TemperatureRecord *records, int record_count, int month);
int max_month_temperature(TemperatureRecord *records, int record_count, int month);

float average_year_temperature(TemperatureRecord *records, int record_count);
int min_year_temperature(TemperatureRecord *records, int record_count);
int max_year_temperature(TemperatureRecord *records, int record_count);

#endif // TEMP_API_H
