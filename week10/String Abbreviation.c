#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Person
    {
        char fname[200];
        char lname[200];
    };
    struct Person *p = (struct Person *) malloc(sizeof(struct Person));
    scanf(" %s %s", p->fname, p->lname);
    printf("%c.%c.", p->fname[0], p->lname[0]);
    free(p);
    return 0;
}