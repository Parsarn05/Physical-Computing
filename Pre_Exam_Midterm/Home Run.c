#include <stdio.h>

int main() {
    int n,homerun = 0;
    double hit;
    scanf("%d %lf", &n, &hit);
    for (int i = 0; i < n ; i++){
        double area;
        scanf("%lf", &area);
        if (area < hit) {
            homerun++;
        }
    }
    printf("%d", homerun);
    return 0;
}