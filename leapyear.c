#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    switch (year % 4 == 0)
    {
        case 1:
            printf("Year is a leap year");
            break;

        case 0:
            printf("Year is not a leap year");
            break;
    }

    return 0;
}

