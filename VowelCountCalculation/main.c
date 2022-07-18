#include <stdio.h>
#include <stdlib.h>

void vowelCountCalculation(char []);

int main(int argc, char **argv)
{

    char userLogin[20];

    puts("Lutfen hesaplanmasini istediginiz stringi giriniz: ");
    gets(userLogin);
    vowelCountCalculation(userLogin);

    return 0;
}

void vowelCountCalculation (char userLogin[]){

    int i = 0, j; // j : unlu harf sayaci
    char vowels[] = {'a', 'e', 'i', 'u', 'o', '\0'};
    int vowelsNumber[] = {0, 0, 0, 0, 0};

    while (userLogin[i] != '\0'){

            for (j = 0; j < 5; j++){

                if (userLogin[i] == vowels[j]){

                    break;
                }
            }

            vowelsNumber[j] += 1;

        i++;
    }

    for (i = 0; i < 5; i++){
        printf("%c karakteri %d adet gecmektedir\n", vowels[i], vowelsNumber[i]);
    }
}
