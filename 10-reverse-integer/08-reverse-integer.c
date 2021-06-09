#include <stdio.h>
int main()
{
    printf("Enter the number : ");
    int x, rev = 0, rem;
    scanf("%d", &x);
    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    printf("Reverse is ");
    printf("%d", rev);
    return 0;
}