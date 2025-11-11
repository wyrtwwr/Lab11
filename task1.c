#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define N 10  

int main() {
    setlocale(LC_ALL, "RUS");

    float A[N];         
    float doubled[N];    
    float temp;
    float sum = 0;       
    printf("Введите значения каждого элемента массива:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;          
        doubled[i] = temp * 2; 
        sum += temp;
    }


    printf("\n| индекс |  исходное знач  |   новое знач   |\n");
    printf("|--------|-----------------|----------------|\n");
    for (int i = 0; i < N; i++) {
        printf("| %6d | %15.2f | %14.2f |\n", i + 1, A[i], doubled[i]);
    }


    float ave = sum / N;
    printf("\nСреднее арифметическое элементов массива: %.2f\n", ave);

    return 0;
}

