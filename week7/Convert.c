#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[2][101];
    scanf(" %[^\n]", str[0]);
    scanf(" %[^\n]", str[1]);

    // Convert two strings to opposite cases
    for (int i = 0; i < 2;i++){
        char new_char[101];
        int len = strlen(str[i]);
        for (int j = 0 ;j < len; j++){
            if (islower(str[i][j])){
                new_char[j] = toupper(str[i][j]);
            }
            else if (isupper(str[i][j])){
                new_char[j] = tolower(str[i][j]);
            }
            else {
                new_char[j] = str[i][j];
            }
        }
        new_char[len] = '\0';
        strcpy(str[i], new_char); //copy right to left
    }
    
    int cmp;
    // Compare the two strings
    if (strcasecmp(str[0], str[1]) == 0) { //using ***strcasecmp*** to not case sensitive when comparing
        cmp = 1;
    }
    else {
        cmp = 0;
    }

    //print
    printf("*** Results ***\n%s\n%s\n***************\n", str[0],str[1]);
    if (cmp == 0){
        printf("Both strings are not the same.");
    }
    else {
        printf("Both strings are the same.");
    }
    return 0;
}