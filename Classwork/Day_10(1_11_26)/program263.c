 
#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCounCapital = 0, iCountDigit = 0,iCountSpecial = 0;
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z'){
            iCountSmall++;

        }
        else if(*str>='A' && *str<='Z'){
            iCounCapital++;

        }
        else if((*str>='0' && *str<='9')){ 
            iCountDigit++;

        }
        else{
            iCountSpecial++;

        }
        str++;
    }
    printf("Count Of Small Character is : %d\n",iCountSmall);
    printf("Count Of Capital Character is : %d\n",iCounCapital);
    printf("Count Of Digits is : %d\n",iCountDigit);
    printf("Count Of Special Character  is : %d\n",iCountSpecial);
}
 



int main()
{   
     
    char Arr[100] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    CountFrequencyX(Arr);
     
 
    return EXIT_SUCCESS;
}