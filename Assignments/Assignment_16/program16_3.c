/*Accept number of row and number of columns from user and display below pattern.*/
//Input : iRow = 4 iCol = 4
//Output :  A   A   A   A
//          B   B   B   B
//          C   C   C   C
//          D   D   D   D
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    //Logic
    char ch = '\0';
    ch = 'A';
    for(int i = 0;i<iRow;i++)
    {   
         
        for(int j = 0; j<iCol; j++)
        {
            printf("%c\t",ch);
             
        }
        printf("\n");
        ch++;
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
