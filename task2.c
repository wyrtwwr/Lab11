#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define SIZE 100

double compute_value(double x) {
    return x * x + sin(5 * x);
}

int main() {
    setlocale(LC_ALL, "RUS");
    char names;
    printf("Введите имя массива:\n");
    scanf("%c", &names);
    double arr[SIZE];
    double start = 0.1, end = 2.1;
    double step = (end - start) / (SIZE - 1);

    double sum_positive = 0.0, sum_negative = 0.0;
    int count_positive = 0, count_negative = 0;

 
    for (int i = 0; i < SIZE; i++) {
        double x = start + i * step;
        arr[i] = compute_value(x);

        if (arr[i] > 0) {
            sum_positive += arr[i];
            count_positive++;
        }
        else if (arr[i] < 0) {
            sum_negative += arr[i];
            count_negative++;
        }
    }

    double mean_positive = (count_positive > 0) ? sum_positive / count_positive : 0.0;


    printf("Имя массива: %c\n", names);
    printf("Сумма положительных элементов: %.6f\n", sum_positive);
    printf("Сумма отрицательных элементов: %.6f\n", sum_negative);
    printf("Количество положительных элементов: %d\n", count_positive);
    printf("Количество отрицательных элементов: %d\n", count_negative);
    printf("Среднее значение положительных элементов: %.6f\n", mean_positive);

    return 0;
}