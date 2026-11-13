//Count ->
#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
    int iCount = 0;
    while(*str!= '\0')
    {
        if((*str == 'a')||(*str == 'b')||(*str == 'c')||(*str == 'd') )
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

    iRet = CountX(Arr);
    printf("The Frequency Of abcd  is : %d\n",iRet);
 
    return EXIT_SUCCESS;
}