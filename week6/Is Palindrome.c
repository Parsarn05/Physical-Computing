#include <stdio.h>
#include <string.h>
 
int main(){
    char txt[100], xtx[100];
    int size = 0;
 
    scanf("%s", txt);
 
    for (int i = 0; txt[i] != '\0'; i++){
        size++;
    }
 
    int pos = 0;
    for (int i = size - 1; i >= 0; i--){
        xtx[pos] = txt[i];
        pos++;
    }
    xtx[pos] = '\0';
 
    if (strcmp(txt, xtx) == 0){
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
 
    return 0;
}