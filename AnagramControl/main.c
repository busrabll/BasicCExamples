#include <stdio.h>
#include <stdlib.h>

void stringSort(char [], int);
void anagramControl(char[], char[]);

int main(int argc, char **argv)
{

    char userLogin[20], userLogin1[20];

    puts("Lutfen ilk stringi giriniz: ");
    gets(userLogin);

    puts("Lutfen ikinci stringi giriniz: ");
    gets(userLogin1);
    anagramControl(userLogin, userLogin1);

    return 0;
}

void stringSort(char userLogin[], int characterNumber)
{
    int i, j, eleman;

    for (i = 1; i < characterNumber; i++){
        eleman = userLogin[i];
        for (j = i - 1; j >= 0 && eleman <= userLogin[j]; j--){
            userLogin[j + 1] = userLogin[j];
        }

        userLogin[j + 1] = eleman;
    }
}

void anagramControl(char userLogin[], char userLogin1[])
{

    int i, j, eleman, check = 1;
    int characterNumber, characterNumber1;

    characterNumber = strlen(userLogin);
    characterNumber1 = strlen(userLogin1);

    if (characterNumber != characterNumber1){

        puts("Girilen stringler anagram degildir!");
    }
    else{
            stringSort(userLogin, characterNumber);
            stringSort(userLogin1, characterNumber1);

        for (i = 0; i < characterNumber; i++){

            if (userLogin[i] != userLogin1[i]){

                check = 0;
                break;
            }
        }

        if (check){

            puts("Girilen stringler anagramdir.");
        }
        else{
            puts("Girilen stringler anagram degildir!");
        }
    }
}
