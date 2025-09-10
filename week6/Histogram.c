#include <stdio.h>
#include <ctype.h>
 
int main(){
    int amount;
    scanf(" %d", &amount);
    int allsize[amount], pos = 0;
    char allc[amount], ch;
 
    for (int i = 0; i < amount; i++) {
        allsize[i] = 0;
        allc[i] = '\0';
    }
 
    for (int i = 0; i < amount; i++){
        scanf(" %c", &ch);
        ch = tolower(ch);
        int found = 0;
        for(int j = 0; j < amount; j++){
            if (ch == allc[j]){
                found = 1;
                allsize[j]++;
                break;
            }
        }
        if (!found){
            allc[pos] = ch;
            allsize[pos] = 1;
            pos++;
        }
    }
    for (int i = 0; i < pos; i++){
        printf("%c: %d\n", allc[i], allsize[i]);
    }
 
    return 0;
}