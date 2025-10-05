#include <stdio.h>

int main()
{
    int num = 1; 
    int square;

    while (num <= 5)
    { 
        square = num * num;
        printf("The square of %d is = %d\n", num, square);
        num++; 
    }

    return 0;
}