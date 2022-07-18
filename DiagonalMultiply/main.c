#include <stdio.h>
#include <stdlib.h>

void selectToArray(int functionArray[][5], int numberOfLine, int numberOfColumn)
{

    int i, j;
    srand(time(NULL));

    for (i = 0; i < numberOfLine; i++){
        for (j = 0; j < numberOfColumn; j++){

            functionArray[i][j] = rand()%5;
        }
    }
}

void printArray(int functionArray[][5], int numberOfLine, int numberOfColumn)
{

    int i, j;

    for (i = 0; i < numberOfLine; i++){
        for (j = 0; j < numberOfColumn; j++){

                printf("%d ", functionArray[i][j]);
        }

        printf("\n");
    }
}

int diagonalMultiply (int functionArray[][5], int numberOfLine, int numberOfColumn)
{

    int i, j, multiply = 1;

    for (i = 0; i < numberOfLine; i++){
        for (j = 0; j < numberOfColumn; j++){

                if (i == j){

                        multiply *= functionArray[i][j];
                    }
            }
    }

    return multiply;
}

int main(int argc, char **argv){

    int numberOfLine = 5, numberOfColumn = 5;
    int array[numberOfLine][numberOfColumn];
    selectToArray(array, numberOfLine, numberOfColumn);
    printArray(array, numberOfLine, numberOfColumn);

    printf("Diagonal carpim: %d ", diagonalMultiply(array, numberOfLine, numberOfColumn));

    return 0;
}
