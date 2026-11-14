/*Write a program which accept total marks & obatined marks from user and calculate percentage(Handele condition when number is zero)*/

#include<stdio.h>
#include<stdlib.h>

float Percentage(float fTotal, float fObtained)
{
    if(fTotal == 0)
    {
        return 0.0;
    }

    return ((fObtained / fTotal) * 100);
}

int main()
{
    float fTotal = 0.0, fObtained = 0.0;
    float fRet = 0.0;

    printf("Enter Total Marks: ");
    scanf("%f",&fTotal);

    printf("Enter Obtained Marks: ");
    scanf("%f",&fObtained);

    fRet = Percentage(fTotal, fObtained);

    printf("Percentage is: %.2f%%",fRet);

    return EXIT_SUCCESS;
}
