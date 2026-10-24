//Input : 5
//Output : 1+2+3+4+5 = 15 
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{   int iCnt = 0;
    int iSum = 0;
    for(iCnt =1;iCnt<=iNo;iCnt++){

        iSum = iSum + iCnt;

         
        
    }
    printf("%d\n",iSum);
     

}
int main()
{   
    int iSum = 0;
    int iCnt = 0;
    iCnt = 1;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

     

    printf("%d\n",iSum);

    return EXIT_SUCCESS;

}