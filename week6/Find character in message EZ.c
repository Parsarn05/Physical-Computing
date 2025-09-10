#include <stdio.h>
#include <ctype.h>
 
int main(){
    char txt[301],c;
    int pos[300],indx = 0;
    scanf(" %[^\n]", &txt);
    scanf(" %c", &c);
    for (int i = 0; txt[i] != '\0'; i++){
 
        if (tolower(txt[i]) == c){
            pos[indx] = i;
            indx++;
        }
    }
    if (indx > 0){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", indx, c);
 
        for (int j = 0; j < indx ; j++){
            printf("%d", pos[j]+1);
            if (j < indx - 1){
                printf(", ");
            }
        }
    }
    else{
        printf("Not found.");
    }
    return 0;
}