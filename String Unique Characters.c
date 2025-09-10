#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf(" %[^\n]", str);

    while (1) {
        int check = 0;
        char result[101];
        int j = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == str[i + 1]) {
                check = 1;
                while (str[i] == str[i + 1]) {
                    i++;
                }
            } else {
                result[j++] = str[i];
            }
        }
        result[j] = '\0';
        if (strcmp(str, result) != 0) {
            printf("%s\n", result);
        }

        if (!check) {
            break;
        }
        strcpy(str, result);
    }

    return 0;
}
