#include<stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = a * 2 + b * 2;
    printf("Perimeter of rectangle = %.4lf units\n", c);
}