//Count ->
#include<stdio.h>
#include<stdlib.h>

int CountSmallX(char *str)
{
    int iCount = 0;
    while(*str!= '\0')
    {
        if((*str >= 'a') && (*str <= 'z') )
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

    iRet = CountSmallX(Arr);
    printf("The Frequency Of Small Letters  : %d\n",iRet);
 
    return EXIT_SUCCESS;
}