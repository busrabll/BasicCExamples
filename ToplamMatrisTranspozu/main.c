#include <stdio.h>
#include <stdlib.h>

int main()
{

    int firstMatrix[5][5], secondMatrix[5][5], totalMatrix[5][5], transpozMatrix[5][5], i, j, totalLine, totalColumn;
    srand(time(NULL)); //Her calismada farkli degerler atamasi icin.

    printf("Ilk Matris:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            firstMatrix[i][j] = rand()%10;
            printf("%d\t", firstMatrix[i][j]);
        }
        printf("\n");
    }

    printf("Ikinci Matris:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

                secondMatrix[i][j] = rand()%10;
                printf("%d\t", secondMatrix[i][j]);
        }

        printf("\n");
    }

    printf("Toplam Matris:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            totalMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t", totalMatrix[i][j]);
        }

        printf("\n");
    }

    printf("Transpoz Matris:\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

                transpozMatrix[i][j] = totalMatrix[j][i];
                printf("%d\t", transpozMatrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
