/*Accept number of row and number of columns from user and display below pattern.*/
//Input : iRow = 4 iCol = 4
//Output :  A   B   C   D
//          A   B   C   D
//          A   B   C   D
//          A   B   C   D
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    //Logic
    char ch = '\0';
     
    for(int i = 0;i<iRow;i++)
    {   
        ch = 'A';
        for(int j = 0; j<iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
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
