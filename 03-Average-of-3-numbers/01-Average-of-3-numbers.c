#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);
    float avg = (x + y + z) / 3.0;
    printf("Average is : %f", avg);
    return 0;
}