//8998
//14341
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{   
    int iDigit = 0;
    int iRev = 0;
    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev*10)+iDigit;
        iNo = iNo/10;
    }

    if(iRev== iNo){     // ISSUE
        return true;
    }
    else{
        return false;
    }
}
int Reverse(int iNo)
{   
    int iDigit = 0;
    int iRev = 0;
    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev*10)+iDigit;
        iNo = iNo/10;
    }

    return iRev;
    
}
 
    

 
int main()
{   
    int iValue = 0;
    bool bRet = false;
     


    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);


    if(bRet == true)
    {
        printf("The Number is Palindrom \n");
    }
    else{
        printf("It is Not Palindrome\n");
    }
     

    return EXIT_SUCCESS;
}