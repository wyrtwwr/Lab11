#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    printf("Введите %d целых чисел (положительных и отрицательных):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lastIndex = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] % 3 == 0) { 
            lastIndex = i + 1; 
        }
    }

    if (lastIndex != -1) {
        printf("Порядковый номер последнего отрицательного элемента, делящегося на 3: %d\n", lastIndex);
    }
    else {
        printf("Таких элементов нет.\n");
    }

   
    return 0;
}