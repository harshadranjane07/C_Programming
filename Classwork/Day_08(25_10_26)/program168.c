//Input : 6457 --> 22 -> 5.5
//Input : 734 -->14 -> 4.66
//Input : 45 --> 9 

#include<stdio.h>
#include<stdlib.h>
float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    float  iAvg = 0.0f;
    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        
        iNo = iNo/10;
         
    }
    iAvg = (float)iSum/iCount;
    return iAvg;
    
}
int main()
{   
    int iValue = 0;
    float fRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    fRet =  AverageDigits(iValue);

    printf("Average  of Digits is : %f\n",fRet);

    return EXIT_SUCCESS;
}