#include <stdio.h>
#include <stdlib.h>

int main(){
    char *txt = (char *) malloc(101*sizeof(char));
    scanf(" %[^\n]",txt);
    char *end = txt;
    while (*end != '\0')
        end++;
    end-=1;
    while (end >= txt)
        printf("%c", *end--);
    
    free(txt);
    return 0;
}