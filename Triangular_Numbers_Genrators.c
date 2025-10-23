#include <stdio.h>

int main()
{
    int num, x, y, sum;

    for (num = 11; num <= 15; num++)
    {
        sum = 0;

        for (int x = 1; x <= num; x++)
        {
            sum = sum + x;
            printf("%d", x);

            if (x < num)
                printf("+");
        }
        printf(" = %d\n", sum);
    }

    return 0;
}