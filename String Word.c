#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[151];
    int wordCount = 1;
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            wordCount++;
        }
    }
    printf("%d words\n----\n", wordCount);
    wordCount = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i]) == 0) {
            printf("%c", tolower(str[i]));
            wordCount++;
        }
        else {
            printf(" : %d\n", wordCount);
            wordCount = 0;
        }
    }
    printf(" : %d", wordCount);
    return 0;
}