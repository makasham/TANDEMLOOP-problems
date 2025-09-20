#include <stdio.h>

int main()
{
    double a, b, r;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+')
    {
        r = a + b;
        printf("Result: %.2lf\n", r);
    }
    else if (op == '-')
    {
        r = a - b;
        printf("Result: %.2lf\n", r);
    }
    else if (op == '*')
    {
        r = a * b;
        printf("Result: %.2lf\n", r);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            r= a / b;
            printf("Result: %.2lf\n", r);
        }
        else
        {
            printf("Error: Cannot divide by zero.\n");
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}