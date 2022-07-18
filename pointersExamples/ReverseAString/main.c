#include <stdio.h>
#include <stdlib.h>

void myStrlen(char *str, int *characterNumber)
{

    char *ptr = str;

    while(*ptr != '\0'){

        *characterNumber += 1;
        ptr++;
    }
}

void reverseAString(char *str)
{
    int characterNumber = 0;
    myStrlen(str, &characterNumber);
    char *ptr = str + characterNumber - 1;

    while (ptr >= str){

        printf("%c ", *ptr);
        ptr--;
    }
}

int main()
{

    char *userLogin = "busra bal";
    reverseAString(userLogin);

    return 0;
}
