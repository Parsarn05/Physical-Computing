#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    char new_str[201];
    scanf(" %s", str);
    for (int i = 0; i < strlen(str); i++){
        for (int j = i + 1; j < strlen(str); j++){
            if (str[i] > str[j]){
                char temp;
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}