#include<stdio.h>

int half_space()
{
    putchar(32);
    putchar(32);
    putchar(32);
    putchar(32);
    putchar(32);
    return 0;
}

int space()
{
    half_space();
    half_space();
    return 0;
}

int double_space()
{
    space();
    space();
    space();
    space();
    space();
    space();
    space();
    return 0;
}

int main()
{
    int n;
    int i1, i2, i3, i4;
    scanf("%d", &n);

    i1 = n / 10000;
    i2 = (n / 1000);
    i3 = (n / 100);
    i4 = (n / 10);
    
    printf("%d", i1);
    double_space();
    space();
    
    printf("%d", i2);
    double_space();
    half_space();
    putchar(32);
    putchar(32);
    putchar(32);
    putchar(32);

    printf("%d", i3);
    double_space();
    half_space();
    putchar(32);
    putchar(32);
    putchar(32);

    printf("%d", i4);
    double_space();
    half_space();
    putchar(32);
    putchar(32);

    printf("%d", n);

    return 0;
}