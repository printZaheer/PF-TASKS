#include <stdio.h>

int main()
{
    int laps;
    printf("Enter number of laps: ");
    scanf("%d", &laps);

    float time;
    float fastest;
    float slowest;
    float total = 0;
    int i = 1;

    while (i <= laps)
    {
        printf("Enter time for lap %d: ", i);
        scanf("%f", &time);

        total = total + time;

        if (i == 1)
        {
            fastest = time;
            slowest = time;
        }
        else
        {
            if (time < fastest)
            {
                fastest = time;
            }
            if (time > slowest)
            {
                slowest = time;
            }
        }

        i++;
    }

    printf("\nFastest lap time: %.2f\n", fastest);
    printf("Slowest lap time: %.2f\n", slowest);
    printf("Average lap time: %.2f\n", total / laps);

    return 0;
}