
/*
Accept character from user.
If it is capital, display all characters from input character till Z.
If input character is small, print all characters in reverse order till a.
In other cases return directly.
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    // Logic
    if(ch >= 'A' && ch <= 'Z')
    {
        for(; ch <= 'Z'; ch++)
        {
            printf("%c\t", ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(; ch >= 'a'; ch--)
        {
            printf("%c\t", ch);
        }
    }
    else
    {
        return;
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
