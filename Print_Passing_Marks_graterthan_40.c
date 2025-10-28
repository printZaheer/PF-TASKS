#include <stdio.h>

int main()
{
    int marks[10];

    
    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }


    printf("\nPassing marks (> 40):\n");
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] >= 40)
        {
            printf("%d ", marks[i]);
        }
    }

    return 0;
}