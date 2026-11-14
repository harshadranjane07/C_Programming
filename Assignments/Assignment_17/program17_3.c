/*Accept number of row and number of columns from user and display below pattern.*/
//Input : iRow = 4 iCol = 4
//Output :  a   b   c   d
//          1   2   3   4
//          a   b   c   d
//          1   2   3   4
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    //Logic
    
      
    for(int i = 0;i<iRow;i++)
    {   
        int iEvenCount = 'a';
        int iOddCount = 1; 
         
        for(int j = 0; j<iCol; j++)
        {
            if((i%2)== 0)
            {
                printf("%c\t",iEvenCount);
                iEvenCount= iEvenCount+1;
            }
            else
            {
                printf("%d\t",iOddCount);
                iOddCount= iOddCount+1;   
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
