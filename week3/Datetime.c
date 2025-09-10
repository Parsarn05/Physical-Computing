#include <stdio.h>

int main()
{
    int isec;
    int dfsec;
    scanf("%d", &isec);
    dfsec = isec;

    int min = isec /60;
    isec -= min * 60;
    int hr = min / 60;
    min -= hr * 60;
    int day = hr / 24;
    hr -= day * 24;

    printf("%d s = %d d %d h %d m %d s\n", dfsec, day, hr, min, isec);

    return 0;
}