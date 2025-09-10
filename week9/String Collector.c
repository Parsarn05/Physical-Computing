#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *txt = (char *) malloc(255* sizeof(char));
    char text;
    int size;
    while (1) {
        scanf(" %c", &text);
        if (text == '-') break;
        *(txt + size++) = text;
    }
    *(txt + size) = '\0';
    printf("%s\n",txt);

    char *end = txt + size-1;
    while (end >= txt){
        printf("%c", *end--);
    }
    free(txt);
    return 0;
}