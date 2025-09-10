#include<stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if ((b >= a && b <= c) || (b <= a && b >= c)){
        printf("%.2f", b);
    }else if((a >= b && a <= c) || (a <= b && a >= c)){
        printf("%.2f", a);
    }else{
        printf("%.2f", c);
    }
    return 0;
}