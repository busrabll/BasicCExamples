#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, total = 0,i;

    printf("Lutfen sorgulanacak olan sayiyi giriniz:");
    scanf("%d", &number);

    for (i = 1; i < number; i++){

        if (number % i == 0){

            total += i;
        }
    }

    if (total == number ){

        printf("%d sayisi mukemmel bir sayidir.", number);
    }
    else{

        printf("%d sayisi mukemmel bir sayi degildir!", number);
    }

    return 0;
}
