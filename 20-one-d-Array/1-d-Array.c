// Program to enter and print an array by user
#include <stdio.h>
int main()
{
    printf("Enter size of array :\n");
    int size;
    scanf("%d", &size);
    int a[size];
    printf("Enter elements of array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}