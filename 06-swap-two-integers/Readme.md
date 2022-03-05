# Program to swap two integers without using extra variable in C

```c
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y); //
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d", x, y);
    return 0;
}
```
### Terminal Output #1
```
12 23
23 12
```
### Terminal Output #2
```
45 90
90 45
```









