#include <stdio.h>

int main()
{
    int num1, num2, LCM;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    if (num1 > num2)
        LCM = num1;
    else
        LCM = num2;

    while (LCM % num1 != 0 || LCM % num2 != 0)
    {
        LCM++;
    }
    printf("LCM of %d and %d = %d\n", num1, num2, LCM);
    return 0;
}