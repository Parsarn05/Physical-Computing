#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *text = (char *) malloc(101);
    int lower = 0,upper = 0,digit = 0;
    scanf(" %[^\n]",text);
    char *ptr = text;
    while (*ptr != '\0'){
        if (islower(*ptr)) lower++;
        if (isupper(*ptr))  upper++;
        if (isdigit(*ptr)) digit++;
        ptr++;
    }
    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d",lower,upper,digit);

    free(text);
    return 0;
}