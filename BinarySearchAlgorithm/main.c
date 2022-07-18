#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10], i, j, kucukSayi, enKucukSayi;
    srand(time(NULL));

    printf("Unsorted Array: ");

    for (i = 0; i < 10; i++){

        array[i] = rand()%100;
        printf("%d ",array[i]);
    }

    printf("\n");

    for (i = 0; i < 9; i++){

        enKucukSayi = array[9];
        kucukSayi = 9;

        for (j = i; j < 9; j++){

            if (array[j] < enKucukSayi){

                enKucukSayi = array[j];
                kucukSayi = j;
            }
        }

        array[kucukSayi] = array[i];
        array[i] = enKucukSayi;
    }

    printf("Sorted Array:");

    for (i = 0; i < 10; i++){

        printf("%d ",array[i]);
    }

    int middle, left, right, searchNumber, check = 0;

    printf("\nLutfen aradiginiz sayiyi giriniz:");
    scanf("%d", &searchNumber);

    left = 0;    // index number
    right = 9;

    while (left <= right){

            middle = (left + right) / 2;

    if (searchNumber == array[middle]){

        check = 1;
        break;
    }
    else if (searchNumber > array[middle]){

        left = middle + 1;
    }
    else{

        right = middle + 1;
    }
    }

    if (check){

        printf("%d sayisi dizide bulunmustur.", searchNumber);
    }
    else{

        printf("%d sayisi dizide bulunamamistir.", searchNumber);
    }

    return 0;
}
