#include <stdio.h>

int main()
{
    int week_number;
    printf("Enter week number: ");
    scanf("%d", &week_number);

    switch (week_number)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THRUSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
        printf("Invalid Number.");
    }
    return 0;
}