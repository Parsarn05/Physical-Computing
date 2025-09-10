#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
    char ch[201], nch[201];
    char c[] = "AIWGZVFUTHSOJLKDECNMRQPYXBAIWGZ";
 
    scanf(" %[^\n]", ch);
 
    for (int i = 0; ch[i] != '\0'; i++) {
        if (isspace(ch[i])) {
            nch[i] = ' ';
        } else {
            char upper = toupper(ch[i]);
            int found = 0;
            for (int j = 0; j < 26; j++) {
                if (c[j] == upper) {
                    char new_char = c[j + 5];
                    nch[i] = islower(ch[i]) ? tolower(new_char) : new_char;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                nch[i] = ch[i]; // ถ้าไม่เจอใน c[] ก็ใส่ตัวเดิม
            }
        }
    }
 
    nch[strlen(ch)] = '\0';
 
    printf("%s\n", nch);
 
    return 0;
}