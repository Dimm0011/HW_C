#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

// Структура для записи о температуре
typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureRecord;

// Прототипы функций
int load_data_from_csv(const char* filename, TemperatureRecord** records, int* record_count);
void print_statistics(TemperatureRecord* records, int record_count, int month);
void print_month_statistics(TemperatureRecord* records, int record_count, int month);
void print_year_statistics(TemperatureRecord* records, int record_count);

#endif // TEMP_FUNCTIONS_H
