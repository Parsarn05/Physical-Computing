#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n, &m);

    char *str = (char *) malloc(n+1 * sizeof(char));
    scanf(" %[^\n]", str);

    for (int i = 0 ; i < n ; i+=m){
        if (*(str + i) != '\0'){
            printf("%c", *(str + i));
        }
    }

    free(str);
    return 0;
}