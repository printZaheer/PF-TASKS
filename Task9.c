#include <stdio.h>
int main()
{
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }



    for (int x = 1; x <= 5; x++)
    {
        for (int y = 5; y >= x; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}