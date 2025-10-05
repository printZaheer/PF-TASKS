#include <stdio.h>

int main()
{
label:
    float operand1, operand2;
    char operator;

    printf("Enter operand1: ");
    scanf("%f", &operand1);

    printf("Enter operand2: ");
    scanf("%f", &operand2);

    printf("Enter operator(+,-,*,/,%%): ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        printf("Sum of operand1+operand2 = %.2f\n", operand1 + operand2);
    }
    else if (operator == '-')
    {
        printf("Difference of operand1 - operand2 = %.2f\n", operand1 - operand2);
    }
    else if (operator == '*')
    {
        printf("Product of operand1 * operand2 = %.2f\n", operand1 * operand2);
    }
    else if (operator == '/')
    {
        if (operand2 == 0)
         {
            printf("Math Error: Division by zero is not possible\n");
        }
        else
        {
            printf("Division of operand1 / operand2 = %.2f\n", operand1 / operand2);
        }
    }
    else if (operator == '%')
    {
        int Op1 = (int)operand1;
        int Op2 = (int)operand2;
        if (Op2 == 0)
        {
            printf("Math Error: Modulus by zero is not possible\n");
        }
        else
        {
            printf("Modulus of operand1 %% operand2 = %d\n", Op1 % Op2);
        }
    }
    else
    {
        printf("Invalid operator.\n");
    }

    char again;
    printf("“Do you want to perform another calculation? (Y/N)”");
    scanf(" %c", &again);
    if (again == 'Y')
        goto label;
    else
        printf("Calculator Exited.");
    return 0;
}