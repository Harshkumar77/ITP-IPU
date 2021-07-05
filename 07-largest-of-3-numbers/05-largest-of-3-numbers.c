#include <stdio.h>
int main()
{
    int x, y, z, max;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            max = x;
        }
        else
        {
            max = z;
        }
    }
    else if (z > y)
    {
        max = z;
    }
    else
    {
        max = y;
    }
    printf("Maximum number is %d", max);
    return 0;
}