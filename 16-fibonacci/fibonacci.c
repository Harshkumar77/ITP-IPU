#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, sum, N;
    scanf("%d", &N);
    printf("1\n");
    for (int i = 1; i < N; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        printf("%d\n", sum);
    }
}