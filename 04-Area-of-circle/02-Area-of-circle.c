#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("Area of circle is %f", area);
}