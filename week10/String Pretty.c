#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int box;
    char str1[51];
    char str2[41];

    scanf("%d", &box);
    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    float scapce1 = ((box-(strlen(str1)))/2.0)-1;
    float scapce2 = ((box-(strlen(str2)))/2.0)-1;
    for (int i = 0; i < box; i++) {
        printf("*");
    }
    printf("\n*");
    for (int i = 0 ; i < ceil(scapce1) ; i++){
        printf(" ");
    }
    printf("%s", str1);
    for (int i = 0 ; i < floor(scapce1) ; i++){
        printf(" ");
    }
    printf("*\n*");
    for (int i = 0 ; i < ceil(scapce2) ; i++){
        printf(" ");
    }
    printf("%s", str2);
    for (int i = 0 ; i < floor(scapce2) ; i++){
        printf(" ");
    }
    printf("*\n");
    for (int i = 0; i < box; i++) {
        printf("*");
    }
}