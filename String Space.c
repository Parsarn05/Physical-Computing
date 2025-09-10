#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[151];
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i]) == 0) {
            printf("%c", str[i]);
        }
    }
    return 0;
}