#include <stdio.h>

int main()
{ int row ,col;
    for ( row = 1; row<= 20; row++)
    {
        for (  col= 1; col<= 20;col++)
        {
            printf(" %4d",row*col);
        }
        printf("\n");
    }
    return 0;
}