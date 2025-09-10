#include <stdio.h>


int main() {
    int n,d = 0;
    scanf("%d", &n);
    double num[n];
    for (int i = 0; i < n ; i++) {
        scanf("%lf", &num[i]);
        if (num[i] == (int)num[i]){
        }
        else {
            d = 1;
        }
    }
    
    for (int i = 0; i < n ; i++) {
        for (int j = i+1; j < n ; j++) {
            if (num[i] > num[j]){
                double num1 = num[i];
                num[i] = num[j];
                num[j] = num1;
            }
        }
    }

    if (d == 0){
        for (int i = 0 ; i < n ; i++){
            printf("%d", (int)num[i]);
            if (i < n -1) {
                printf(" ");
            }
        }
    }
    else {
        for (int i = 0 ; i < n ; i++){
            printf("%.2lf", num[i]);
            if (i < n -1) {
                printf(" ");
            }
        }
    }
}