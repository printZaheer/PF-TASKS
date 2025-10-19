#include <stdio.h>

int main()
{

    for (int x = 1; x <= 10; x++)
    {
        for (int z = 9; z >= x; z--)
        {
            printf(" ");
        }
        for (int y = 1; y <= x; y++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}