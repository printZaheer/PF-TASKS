#include <stdio.h>

int main()
{
    long num = 1; 
    int i;

    while (1) 
    {
        for (i = 1; i <= 20; i++)
        {
            if (num % i != 0)
                break; 
        }

        if (i == 21) 
        {
            printf("The smallest number divisible by all numbers from 1 to 20 is: %ld\n", num);
            break; 
        }

        num++; 
    }

    return 0;
}