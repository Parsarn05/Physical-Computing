#include <stdio.h>
#include <stdlib.h>

int main() {
    int round;
    scanf("%d", &round);
    int *mylist = (int *)malloc(round * sizeof(int));
    if (mylist == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < round; i++) {
        scanf("%d", (mylist + i));
    }
    int pattern = 0;
    int one = 0;
    int finaly = round - 1;
    for (int i = 0; i < round; i++) {
        if (pattern == 0 || pattern > 2) {
            printf("%d", *(mylist + (finaly--)));
        } else {
            printf("%d", *(mylist + (one++)));
        }
        if (i < round - 1) printf(" -> ");
        pattern++;
        if (pattern == 5) pattern = 1;
    }
    printf("\n");
    free(mylist);
    return 0;
}
