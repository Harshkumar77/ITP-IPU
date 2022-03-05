#include <stdio.h>
int main()
{
    int a[9] = {45, 12, 90, 78, 49, 72, 10, 86, 8};
    printf("Numbers in reverse order :\n");
    for (int i = 8; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}