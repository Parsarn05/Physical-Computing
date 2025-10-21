#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Menu {
    int id;
    char* data;
    struct Menu* next;
}Menu;

typedef struct List {
    unsigned int count;
    struct Menu* head;
}List;

Menu *createMenu(int id, char* data) {
    Menu* newMenu = (Menu*)malloc(sizeof(Menu));
    newMenu->data = (char*)malloc(strlen(data) + 1);
    strcpy(newMenu->data, data);
    newMenu->id = id;
    newMenu->next = NULL;
    return newMenu;
}

List *createList() {
    List* list = (List*)malloc(sizeof(List));
    list->count = 0;
    list->head = NULL;
    return list;
}

void insert(List* list,int id, char* data){
    struct Menu* pNew = createMenu(id,data);
    if (list->count == 0){
        list->head = pNew;
    }
    else {
        struct Menu* pointer = list->head;
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void traverse(List* list, int id) {
    struct Menu* pointer = list->head;
    if (id < 0){
        id = list->count + id;
    }
    while (pointer != NULL && pointer->id != id){
        pointer = pointer->next;
    }
    if (pointer == NULL){
        printf("Error");
    }
    else {
        printf("%s", pointer->data);
    }
}

int main() {
    struct List* mylist = createList();
    char* data;
    data = (char*)malloc(20*sizeof(char));
    int count = 0;
    int find;
    scanf("%s", data);
    while (strcmp(data, "Last") != 0) {
        insert(mylist, count, data);
        count++;
        scanf("%s", data);
    }
    scanf("%d",&find);
    traverse(mylist, find);

    Menu* current = mylist->head;
    while (current != NULL)
    {
        free(current->data);
        Menu* tmp = current->next;
        free(current);
        current = tmp;
    }
    free(mylist);
    free(data);
}
