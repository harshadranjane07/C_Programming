/*Accept the marks of a Student out of 100 and display the grade according to following criteria. Marks outside 0-100 are invalid*/
#include<stdio.h>
#include<stdlib.h>
void DisplayGread(float fmarks)
{   
    if(fmarks<0 || fmarks>100)
    {
        printf("Invalid Marks\n");
    }
    else if(fmarks>=90)
    {
        printf("Gread A\n");
    }
    else if(fmarks>=75)
    {
        printf("Gread B\n");
    }
    else if(fmarks>=60)
    {
        printf("Gread C\n");
    }
    else if(fmarks>=40)
    {
        printf("Gread D\n");
    }
    else{
        printf("Fail\n");
    }

}
int main()
{
    float fmarks = 0.0f;
    printf("Enter Marks : \n");
    scanf("%f",&fmarks);
    DisplayGread(fmarks);
    return EXIT_SUCCESS;
}