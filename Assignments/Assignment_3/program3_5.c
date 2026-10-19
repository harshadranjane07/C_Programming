/*Accept character from user and check whether  character is vowel(a,e,i,o,u)or not*/

#include<stdio.h>

void CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' ||
       cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' ||
       cValue == 'O' || cValue == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    CheckVowel(cValue);

    return 0;
}
