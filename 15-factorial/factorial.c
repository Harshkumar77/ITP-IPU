#include <stdio.h>
int main()
{
    int product = 1, N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++)
        product = product * i;
    printf("Factorial : %d", product);
}