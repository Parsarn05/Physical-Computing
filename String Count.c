#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;
    char str[151];
    int amount = 0;

    scanf(" %c", &ch);
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (tolower(ch) == tolower(str[i])) {
            amount++;
        }
    }
    printf("%d", amount);
    return 0;
}