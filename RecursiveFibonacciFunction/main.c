#include <stdio.h>
#include <stdlib.h>

int fibonacciRecursive(int);

int main(int argc, char **argv)
{

    int i, upperLimit;
    printf("Lutfen seri icin bir ust limit giriniz: ");
    scanf("%d ", &upperLimit);

    for (i = 0; i < upperLimit; i++){

            printf("%d ", fibonacciRecursive(i));
    }

    return 0;
}

int fibonacciRecursive(int number)
{

    if (number == 0 || number == 1){

        return number;
    }
    else{
            return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
    }
}
