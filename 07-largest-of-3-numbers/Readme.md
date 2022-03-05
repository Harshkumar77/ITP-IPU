# Program to find maximum of 3 numbers in C

```c
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
```
### Terminal Output #1
```
Enter 3 numbers : 46 1 8
Maximum number is 46
```
### Terminal Output #2
```
Enter 3 numbers : 56 90 31
Maximum number is 90
```









