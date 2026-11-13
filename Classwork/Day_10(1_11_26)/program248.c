//Count -> a    e   i   o   u
#include<stdio.h>
#include<stdlib.h>

int CountVowels(char *str)
{
    int iCount = 0;
    while(*str!= '\0')
    {
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
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

    iRet = CountVowels(Arr);
    printf("The Frequency Of Vowels  is : %d\n",iRet);
 
    return EXIT_SUCCESS;
}