#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double findhight(int degree, int u);

int main()
{
    int degree, u;
    scanf("%d %d", &degree, &u);
    double hight = findhight(degree, u);

    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4f\n", hight);

    return 0;
}

double findhight(int degree, int u)
{
    // convert degree to radians before using sin()
    double radian = (degree * PI) / 180.0;
    double s = sin(radian);
    double hight = (pow(u, 2) * pow(s, 2)) / (2 * 9.81);
    return hight;
}
