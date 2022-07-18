#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10], i, j, number;
    srand(time(NULL));

    printf("Array:\n");

    for (i = 0; i < 10; i++){

        array[i] = rand()%10;
        printf("%d ", array[i]);
    }

    printf("\nSorted Array:\n");

    for (i = 1; i < 10; i++){

        number = array[i];

        for (j = i - 1; j >= 0 && number <= array[j]; j--){

            array[j + 1] = array[j];
        }

        array[j + 1] = number;
    }

    for (i = 0; i < 10; i++){

        printf("%d ", array[i]);
    }

    return 0;
}
