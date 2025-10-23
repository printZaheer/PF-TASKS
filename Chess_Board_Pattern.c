#include <stdio.h>

int main()
{
    int row, col;



    for (row = 1; row <= 8; row++)
    {
        for (col = 1; col <= 8; col++)
        {
            if ((row + col) % 2 == 0)
                printf("%s", "#"); 
            else
                printf("%s", " "); 
        }
        printf("\n"); 
    }

    return 0;
}