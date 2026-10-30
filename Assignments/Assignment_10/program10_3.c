/*Write a program which accept  distance in kilometer and convert it into meter. 1km = 1000 m .*/
 
#include<stdio.h>
#include<stdlib.h>
int KMtoMeter(int iNo)
{   
    int iAns = 0;
    iAns = iNo*1000;
    return iAns;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer Value: \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter Value is : %d\n",iRet);
 
    return EXIT_SUCCESS;
}