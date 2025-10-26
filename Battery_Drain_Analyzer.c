#include <stdio.h>

int main()
{
    int battery, prevBattery;
    float totalDrop = 0, hours = 0;

    printf("Enter initial battery percentage: ");
    scanf("%d", &battery);

    prevBattery = battery;

    while (battery != 0)
    {
        printf("Enter battery percentage after 30 minutes (enter 0 if phone is off): ");
        scanf("%d", &battery);

        if (battery == 0)
            break;

        totalDrop = totalDrop + (prevBattery - battery);
        hours = hours + 0.5;
        prevBattery = battery;
    }

    printf("\n--- Battery Usage Summary ---\n");
    printf("Total hours used before shutdown: %.1f hours\n", hours);

    if (hours > 0)
    {
        float avgDropPerHour = totalDrop / hours;
        printf("Average percentage drop per hour: %.2f%%\n", avgDropPerHour);
    }
    else
    {
        printf("Phone didn't stay on long enough to measure usage.\n");
    }

    return 0;
}