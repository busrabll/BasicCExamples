#include <stdio.h>
#include <stdlib.h>

void createArray(int *array, int numberOfElement){

    srand(time(NULL));
    int *ptr;

    for (ptr = array; ptr < array + numberOfElement; ptr++){ // 4 byte

            *ptr = rand()%100;
    }
}

void printArray(int *array, int numberOfElement){

    int *ptr;

    for (ptr = array; ptr < array + numberOfElement; ptr++){ // ptr++ : bir sonraki indekse gec.

        printf("%d ", *ptr);
    }
}

void maxMinCalculation(int *array, int numberOfElement, int *max, int * min){

    int *ptr = array;
    *max = *ptr;
    *min = *ptr;
     ptr++;

    for (; ptr < array + numberOfElement; ptr++){ // ptr++ : bir sonraki indekse gec.

            if (*ptr > *max){

                *max = *ptr;
            }
            else if (*ptr < * min){

                *min = *ptr;
            }
    }
}

void sumAverageCalculation(int *array, int numberOfElement, int *average, int *sum){

    int *ptr;

    for (ptr = array; ptr < array + numberOfElement; ptr++){

        *sum += *ptr;
    }

    *average = *sum / numberOfElement;
}


int main()
{

    int array[10];
    int max, min;
    int sum, average;
    createArray(array, 10);
    printArray(array, 10);
    maxMinCalculation(array, 10, &max, &min);

    printf("\nDizinin en buyuk elemani: %d\nDizinin en kucuk elemani:%d", max, min);

    sumAverageCalculation(array, 10, &average, &sum);

    printf("\nDizinin elemanlari toplami: %d\nDizinin ortalamasi: %d", sum, average);

    return 0;
}
