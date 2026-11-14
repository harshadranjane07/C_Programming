/* Write a program which accept three number from user and print its Multiplication(Handel the condition if number is zero).
*/

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        return 0;
    }

    return (iNo1 * iNo2 * iNo3);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first Number: ");
    scanf("%d",&iValue1);

    printf("Enter second Number: ");
    scanf("%d",&iValue2);

    printf("Enter third Number: ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n",iRet);

    return EXIT_SUCCESS;
}
