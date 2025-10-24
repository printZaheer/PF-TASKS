#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Enter value of x: ");
    scanf("%d", &x);

    float sum = 0;
    int k = 0;

    while (k <= n)
    {
        float power = 1;
        int i = 1;
        while (i <= k)
        {
            power = power * x;
            i++;
        }

        float fact = 1;
        int j = 1;
        while (j <= k)
        {
            fact = fact * j;
            j++;
        }

        sum = sum + (power / fact);

        k++;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
