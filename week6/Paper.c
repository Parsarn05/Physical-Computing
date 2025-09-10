#include <stdio.h>
 
int main(){
    char a[3],b[3];
    int diff = 0,n,m;
    scanf("%s", a);
    scanf("%s", b);
    if (a[2] == '0' || a[2] == '1' || a[2] == '2'){
        if (a[2] == '0'){
            n = 10;
        }
        else if (a[2] == '1'){
            n = 11;
        }
        else{
            n = 12;
        }
    }
    else{
        n = a[1] - '0';
    }
 
    if (b[2] == '0' || b[2] == '1' || b[2] == '2'){
        if (b[2] == '0'){
            m = 10;
        }
        else if (b[2] == '1'){
            m = 11;
        }
        else{
            m = 12;
        }
    }
    else{
        m = b[1] - '0';
    }
 
    if (n == 0 && m == 1){
        diff = 1;
    }
    else{
        diff = (m - n );
    }
 
    int ans = 1;
    for (int i = 0; i < diff; i++){
        ans *= 2;
    }
    printf("%d", ans);
    return 0;
}