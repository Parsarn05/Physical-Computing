#include<stdio.h>

int main()
{
    char t1, t2, t3, t4, t5;
    scanf(" %c", &t1);//" %c"มีช้องว่างก่อน % ด้วย
    scanf(" %c", &t2);
    scanf(" %c", &t3);
    scanf(" %c", &t4);
    scanf(" %c", &t5);

    printf("%c\n", t1+1);
    printf("%c\n", t2);
    printf("%c\n", t3+1);
    printf("%c\n", t4);
    printf("%c", t5+1);
    return 0;
}