#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    double result;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf(" Result of %d ^ %d = %.0lf\n", base, exponent, result);

    return 0;
}