/*Accept number of row and number of columns from user and display below pattern.*/
//Input : iRow = 4 iCol = 4
//Output :  1   2   3   4
//              2   3   4
//                  3   4
//                      4
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    //Logic
    for(int i = 1;i<=iRow;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            printf("  ");
             
        }
        for(int j=1;j<=iRow-i+1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{   
    int iValue1= 0,iValue2 = 0;

    printf("Enter Number of Row and Columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
