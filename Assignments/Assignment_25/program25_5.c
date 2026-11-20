
/*
Accept division of student from user and display exam timing.
Division A - 7 AM
Division B - 8.30 AM
Division C - 9.20 AM
Division D - 10.30 AM
(Application should be case insensitive)
*/

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    // Logic
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM");
            break;

        default:
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char chValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &chValue);

    DisplaySchedule(chValue);

    return EXIT_SUCCESS;
}
