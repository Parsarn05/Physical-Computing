#include <stdio.h>

int main()
{
    float grade;
    scanf("%f", &grade);
    if (grade >= 80 && grade <= 100) {
        printf("A\n");
    } else if (grade >= 70 && grade < 80) {
        printf("B\n");
    } else if (grade >= 60 && grade < 70) {
        printf("C\n");
    } else if (grade >= 50 && grade < 60) {
        printf("D\n");
    } else if (grade >= 0 && grade < 50) {
        printf("F\n");
    } else {
        printf("Out of Range\n");
    }
    return 0;
}