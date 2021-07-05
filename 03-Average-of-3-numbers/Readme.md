# Program to find average of 3 numbers in C

```c
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
```
### Terminal Output #1
```
Enter 3 numbers : 45 90 23
Average is : 52.666668
```
### Terminal Output #2
```
Enter 3 numbers : 5 5 0
Average is : 3.333333
```









