#include <stdio.h>

int main()
{
    int num, i, sum;
    printf("Perfect numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++)
    {
        sum = 0;
        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}