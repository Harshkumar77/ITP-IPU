#include <stdio.h>
int main()
{
    char s1[1000], s2[1000], s3[1000];
    scanf("%s%s", s1, s2);
    int i = 0;
    for (i; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
    }
    for (int j = 0; s2[j] != '\0'; j++)
    {
        s3[i] = s2[j];
        i++;
    }
    s3[i] = '\0';
    printf("Concated string : %s\n", s3);
    return 0;
}