#ifndef TEMP_API_H
#define TEMP_API_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureRecord;

// Прототипы функций для статистики
float average_month_temperature(TemperatureRecord *records, int record_count, int month);
int min_month_temperature(TemperatureRecord *records, int record_count, int month);
int max_month_temperature(TemperatureRecord *records, int record_count, int month);

float average_year_temperature(TemperatureRecord *records, int record_count);
int min_year_temperature(TemperatureRecord *records, int record_count);
int max_year_temperature(TemperatureRecord *records, int record_count);

// Функция для загрузки данных из CSV
int load_csv(const char *filename, TemperatureRecord *records);

#endif // TEMP_API_H
