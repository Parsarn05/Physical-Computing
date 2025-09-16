#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[2001];
    scanf(" %[^\n]", str);
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == 'c' && tolower(str[i + 1]) == 'a' && tolower(str[i + 2]) == 't') {
            if (count > 0) {
                printf(", ");
            }
            printf("%d", i);
            i += 2;
            count++;
        }
    }
}