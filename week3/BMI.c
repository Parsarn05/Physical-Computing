#include<stdio.h>

int main()
{
    float hight;
    float weight;
    scanf("%f", &hight);
    scanf("%f", &weight);
    hight /= 100;
    float bmi = weight / (hight * hight);
    printf("%.6f", bmi);

    return 0;
}