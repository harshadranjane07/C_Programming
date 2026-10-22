/*Accept a student's marks and age. A student is eligible for admission if their marks are at least 60 and their age is at least 17 years. If either condition is not satisfied, display Not Eligible. Negative age or marks outside the range of 0–100 must be treated as invalid input.*/
#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input\n");
    }
    else if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}