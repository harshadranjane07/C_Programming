#include<stdio.h>
#include<stdlib.h>
int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iCount++;
        
        iNo = iNo/10;
    }
    return iCount;
    
}
int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        
        iNo = iNo/10;
    }
    return iSum;
    
}

 
int main()
{   
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0;


    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = (float)iSum/(float)iCount;  
    printf("NUmber of Dogits : %d\n",iCount);
    printf("Summation of Digits : %d\n",iSum);
    printf("Average  of Digits is : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}