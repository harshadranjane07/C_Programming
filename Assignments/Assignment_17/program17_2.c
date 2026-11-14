/*Accept number of row and number of columns from user and display below pattern.*/
//Input : iRow = 4 iCol = 4
//Output :  2   4   6   8
//          1   3   5   7
//          2   4   6   8
//          1   3   5   7
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    //Logic
    
     
    for(int i = 0;i<iRow;i++)
    {   
        int iEvenCount = 2;
        int iOddCount = 1;
        for(int j = 0; j<iCol; j++)
        {
            if((i%2)== 0)
            {
                printf("%d\t",iEvenCount);
                iEvenCount= iEvenCount+2;
            }
            else
            {
                printf("%d\t",iOddCount);
                iOddCount= iOddCount+2;   
            }
             
            
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
