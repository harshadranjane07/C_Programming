/* Write a program which accept temperature in fahrenheit and convert it into celcius(1 celcius = (fahrenheit-32)*(5/9)) .*/
 
#include<stdio.h>
#include<stdlib.h>
double FHtoCS(float temp)
{   
    double dAns = 0;
    dAns =(double)(temp-32)*(5.0/9.0);
    return dAns;
}
int main()
{   
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FHtoCS(fValue);

    printf("Celcius Value is : %f\n",dRet);
 
    return EXIT_SUCCESS;
}