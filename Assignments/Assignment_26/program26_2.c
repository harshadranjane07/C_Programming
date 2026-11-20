
/*
Accept character from user.
If character is small, display its corresponding capital character.
If character is capital, display its corresponding small character.
In other cases, display as it is.
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    // Logic
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
