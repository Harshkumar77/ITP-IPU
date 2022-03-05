#include <stdio.h>
int main()
{
    // program to print table
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, i * n);
    }
}