#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    if (m<n){
        for (int i = m; i <= n ; i++){
            printf("%d ", i);
        }
    }
    else{
        do {
            printf("%d ", m);
            m--;
        } while (m >= n);
    }
    return 0;
}