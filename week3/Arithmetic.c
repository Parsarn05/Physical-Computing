#include <stdio.h>

int main()
{
    double a, b, sum, diff, mul, div;

    scanf("%lf,%lf", &a, &b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;

    printf("The sum of the given numbers : %.6lf\n", sum);
    printf("The difference of the given numbers : %.6lf\n", diff);
    printf("The product of the given numbers : %.6lf\n", mul);
    printf("The quotient of the given numbers : %.6lf\n", div);
    return 0;
}
