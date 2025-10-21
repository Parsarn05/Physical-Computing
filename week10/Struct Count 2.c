#include <stdio.h>
#include <string.h>

int main() {
    int ch = 0, word = 0, line = 0;
    char sentence[450];
    scanf(" %[^\n]", sentence);

    while (sentence[0] != '.') {
        line++;
        int lenght = strlen(sentence);
        for (int i = 0; i < lenght; i++) {
            if (sentence[i] == ' ')word++;
            else ch++;
        }
        word++;
        scanf(" %[^\n]", sentence);
    }
    printf("Char = %d, word = %d, line = %d", ch, word, line);
    return 0;
}