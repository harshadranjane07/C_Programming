/*Write a program which accept width and height of rectangle from user and calculates its area*/
 
#include<stdio.h>
#include<stdlib.h>
double RectArea(float width,float height)
{
     
    double iAns = width*height;
    return iAns;
}
int main()
{   
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width  of Rectangle : \n");
    scanf("%f",&fValue1);

    printf("Enter the height  of Rectangle : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle  is : %f\n",dRet);
    
    return EXIT_SUCCESS;
}