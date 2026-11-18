/*Accept Number from user and displaybellow pattern.*/
//Input : 5 
//Output : 5    #    4   #   3   #     2    #   1   #

/* Accept Number from user and display below pattern. */

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of Elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
