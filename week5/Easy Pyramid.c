#include <stdio.h>

int main(){
    int n;
    int s = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for(int j = n-i; j > 0; j--){
            printf(" ");
        }

        for (int j = 1; j <= s; j++){
            printf("*");
        }
        printf("\n");
        s += 2;
    }
    return 0;
}
