//Count ->
#include<stdio.h>
#include<stdlib.h>

int CountDigitsX(char *str)
{
    int iCount = 0;
    while(*str!= '\0')
    {
        if((*str >= '0') && (*str <= '9') )
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

    iRet = CountDigitsX(Arr);
    printf("The Frequency Of digits    : %d\n",iRet);
 
    return EXIT_SUCCESS;
}