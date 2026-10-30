/*Write a program which accept radius of circle from user and calculate its area. Consider PI = 3.14 ,Area = PI * R * R. */
#include<stdio.h>
#include<stdlib.h>
double CircleArea(float fRadius)
{
    double PI = 3.14;
    double iAns = (PI*fRadius*fRadius);
    return iAns;
}
int main()
{   
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius of Circle : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %f\n",dRet);
    return EXIT_SUCCESS;
}