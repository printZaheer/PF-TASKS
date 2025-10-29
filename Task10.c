// Write a program that find the reverse arrays by using arrays

#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30,40,50};
    int temperary_num;

    printf("Original array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    for (int i = 0; i < 5 / 2; i++)
    {
        temperary_num = num[i];
        num[i] = num[5- 1 - i];
        num[5 - 1 - i] = temperary_num;
    }

    printf("\nReversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}