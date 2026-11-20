
/*
Write a program which displays ASCII table.
Table contains symbol, Decimal, Hexadecimal and Octal
representation of every member from 0 to 255.
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    // Logic
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)
        {
            printf("%c\t", iCnt);
        }
        else
        {
            printf("-\t");
        }

        printf("%d\t%X\t\t%o\n", iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
