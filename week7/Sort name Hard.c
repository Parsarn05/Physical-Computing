#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    int size;
    scanf("%d", &size);
    char list[size][61];
    for (int i = 0; i < size; i++){
        char name[61];
        scanf(" %[^\n]", name);
         
        // Convert name to title case
        int space = 0;
        char new_name[sizeof(name)/sizeof(name[0])];
        for (int i = 0; i < 61; i++){
            if (name[i] == '\0'){
                new_name[i] = '\0';
                break;
            }
            if (i == 0 || space == 1){
                new_name[i] = toupper(name[i]);
                space = 0;
            }
            else if (isspace(name[i])){
                space = 1;
                new_name[i] = ' ';
            }
            else{
                new_name[i] = tolower(name[i]);
            }
        }
 
        // Fill into the list
        for (int j = 0 ; j < 60; j++){
            list[i][j] = new_name[j];
        }
    }
 
    // Sort the list
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (strcmp(list[i], list[j]) > 0){
                char temp[61 * 2];
                strcpy(temp, list[i]);
                strcpy(list[i], list[j]);
                strcpy(list[j], temp);
            }
        }
    }
 
    for (int i = 0; i < size; i++){
        printf("%s\n", list[i]);
    }

    return 0;
}