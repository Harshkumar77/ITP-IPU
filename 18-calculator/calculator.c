#include <stdio.h>
int main()
{
    float a, b;
    char oper;
    printf("Enter two numbers :\n");
    scanf("%f %f", &a, &b);
    printf("Enter operator :\n");
    scanf("%c", &oper);
    switch (oper)
    {
    case '+':
        printf("%f\n", a + b);
        break;
    case '-':
        printf("%f\n", a - b);
        break;
    case '*':
        printf("%f\n", a * b);
        break;
    case '/':
        printf("%f\n", a / b);
        break;

    default:
        printf("Invalid");
        break;
    }
    return 0;
}