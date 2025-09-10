#include <stdio.h>

int main(){
    char txt[101];
    int len = 0;
    scanf(" %[^\n]", txt);
    for (int i = 0 ; i < 101 ; i++){
        if (txt[i] == '\0'){
            break;
        }
        len += 1;
    }
    for (int j = len-1; j >= 0; j--){
        printf("%c", txt[j]);
    }
    return 0;
}