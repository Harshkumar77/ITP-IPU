#include <stdio.h>
int main()
{
    for (int i = 100; i <= 999; i++)
    {
        int sum = 0, num = i, rem;
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
            sum += rem * rem * rem;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}