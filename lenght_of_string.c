#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int v = 0, length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            v++;
    }
    printf("Length of string is %d\n", length);
    printf("Number of vowel : %d\n", v);
    return 0;
}