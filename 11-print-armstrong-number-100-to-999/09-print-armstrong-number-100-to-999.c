#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    scanf("%d", &i);
    int sum = 0, num = i, rem;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += pow(rem, 3);
        printf("%f %d\n", pow(rem, 3), (int)pow(rem, 3));
    }
    if (sum == i)
    {
        printf("Armstrong number\n");
    }
}