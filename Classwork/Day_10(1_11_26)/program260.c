//$ % & # *
#include<stdio.h>
#include<stdlib.h>

int CountSpecialX(char *str)
{
    int iCount = 0;
    while(*str!= '\0')
    {
        if((*str == '$') || (*str == '#') ||(*str == '&')||(*str == '*')||(*str == '%'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}



int main()
{   
    int iRet = 0;
    char Arr[100] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountSpecialX(Arr);
    printf("The Frequency Of special letters  : %d\n",iRet);
 
    return EXIT_SUCCESS;
}