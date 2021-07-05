#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);
    int avg = (x + y + z) / 3;
    printf("Average is : %d", avg);
    return 0;
}