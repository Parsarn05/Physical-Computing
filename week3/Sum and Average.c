#include <stdio.h>

int main()
{
    double i, sum,avg;

    scanf("%lf", &i);
    sum += i;
    scanf("%lf", &i);
    sum += i;
    scanf("%lf", &i);
    sum += i;
    scanf("%lf", &i);
    sum += i;
    
    avg = sum / 4.0;
    
    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf\n", avg);
    
    return 0;
}