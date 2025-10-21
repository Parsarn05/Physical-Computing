#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char find[10];
    scanf("%d %s", &n, find);
    struct Book {
        char id[10];
        char name[100];
        char author[100];
    }b[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", b[i].id, b[i].name, b[i].author);
    }
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(b[i].id, find) == 0) {
            printf("%s %s %s", b[i].id, b[i].name, b[i].author);
            check = 1;
        }
    }
    if (check == 0) {
        printf("Not Found");
    }
    return 0;
}