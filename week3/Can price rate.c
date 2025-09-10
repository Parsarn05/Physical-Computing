#include <stdio.h>

int main()
{
    float price;
    float r, h;
    scanf("%f %f %f", &price, &r, &h);
    float pi = 3.14159265359;
    r /= 2;
    float v = (h*pi)*(r*r);
    float pprice = price / v;

    printf("Volume : %.2fml\n", v);
    printf("Baht/ml : %.4f\n", pprice);

    return 0;
}