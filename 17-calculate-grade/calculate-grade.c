#include <stdio.h>
int main()
{
    int AM, AP, EM, EVS, CS;
    int total = 0, marks;
    printf("Enter marks of AM AP EM EVS CS:\n");
    scanf("%d %d %d %d %d", &AM, &AP, &EM, &EVS, &CS);
    total = AM + AP + EM + EVS + CS;
    float percentage = total / 5.0;
    printf("Your percentage : %0.2f %% \n", percentage);
    if (percentage >= 90)
        printf("Grade : A+");
    else if (percentage >= 80)
        printf("Grade : A");
    else if (percentage >= 70)
        printf("Grade : B+");
    else if (percentage >= 60)
        printf("Grade : B");
    else if (percentage >= 50)
        printf("Grade : C+");
    else if (percentage >= 40)
        printf("Grade : C");
    else
        printf("You failed");
    return 0;
}