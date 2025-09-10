#include <stdio.h>
#include <math.h>

int perimeter(float x, float y);
int area(float x, float y);
float getNum(void);

int main() {
    float a, b;
    a = getNum();
    b = getNum();
    perimeter(a, b);
    area(a, b);
    return 0;
}

float getNum(void) {
    float io;
    scanf("%f", &io);
    return io;
}
int perimeter(float x, float y) {
    float c = sqrt(x * x + y * y);
    float p = x + y + c;
    printf("Perimeter: %.2f\n", p);
    return 0;
}

int area(float x, float y) {
    float a = 0.5 * x * y;
    printf("Area: %.2f\n", a);
    return 0;
}
