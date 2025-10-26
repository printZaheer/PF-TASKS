#include <stdio.h>

    int main(){
    int p1, p2;
    int i, count1 = 0, count2 = 0;

    printf("=== Composite Number Game ===\n");

    printf("Player 1, enter your number: ");
    scanf("%d", &p1);

    printf("Player 2, enter your number: ");
    scanf("%d", &p2);

    
    for (i = 1; i <= p1; i++)
    {
        if (p1 % i == 0)
            count1++;
    }

    for (i = 1; i <= p2; i++)
    {
        if (p2 % i == 0)
            count2++;
    }

    printf("\nResults:\n");

    if (count1 > 2)
        printf("Player 1 chose %d (Composite)\n", p1);
    else
        printf("Player 1 chose %d (Not Composite)\n", p1);

    if (count2 > 2)
        printf("Player 2 chose %d (Composite)\n", p2);
    else
        printf("Player 2 chose %d (Not Composite)\n", p2);


    if (count1 > 2 && count2 <= 2)
    {
        printf("\nPlayer 1 wins!\n");
    }
    else if (count1 <= 2 && count2 > 2)
    {
        printf("\nPlayer 2 wins!\n");
    }
    else if (count1 <= 2 && count2 <= 2)
    {
        printf("\nIt's a tie! Both are not composite.\n");
    }
    else
    {
        if (p1 > p2)
            printf("\nPlayer 1 wins! (Bigger composite)\n");
        else if (p2 > p1)
            printf("\nPlayer 2 wins! (Bigger composite)\n");
        else
            printf("\nIt's a draw! Same composite number.\n");
    }

    return 0;
}