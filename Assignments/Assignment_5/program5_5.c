/*Accept a single character  and determine whether it is an uppercase alphabate,lowercase alphabate ,digit ,or special characetr . Use charactetr comparisons without using library character classification function*/
//Input  A -> Uppercase Alphabate 
//Input  m -> Lowercase Alphabate 
//Input  7 -> Digit 
//Input  @ -> Special Character 
#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf(" %c", &cValue);

    CheckCharacter(cValue);

    return EXIT_SUCCESS;
}