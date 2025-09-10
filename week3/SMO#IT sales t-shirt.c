#include<stdio.h>

int main()
{
    float dprice, percent, amount, price;
    scanf(" %f", &dprice);
    scanf(" %f", &percent);
    scanf(" %f", &amount);
    price = amount * (dprice - (dprice * (percent / 100)));
    
    printf("%.2f", price);

    return 0;
}