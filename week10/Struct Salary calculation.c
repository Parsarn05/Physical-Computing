#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Record {
    char* id;
    char* name;
    long salary;
    long sales;
    struct Record* next;
}Record;

typedef struct List {
    unsigned int count;
    struct Record* head;
}List;

List *createList() {
    List* list = (List*)malloc(sizeof(List));
    list->count = 0;
    list->head = NULL;
    return list;
}

Record *createRecord(char* id, char* name, long salary, long sales) {
    struct Record* newRecord = (Record*)malloc(sizeof(Record));
    newRecord->id = (char*)malloc(strlen(id) + 1);
    strcpy(newRecord->id, id);
    newRecord->name = (char*)malloc(strlen(name)+1);
    strcpy(newRecord->name, name);
    newRecord->salary = salary;
    newRecord->sales = sales;
    newRecord->next = NULL;
    return newRecord;
}

void insert(List* list, char* id, char* name, long salary, long sales) {
    struct Record* pNew = createRecord(id, name, salary, sales);
    if (list->count == 0) {
        list->head = pNew;
        list->count++;
    }
    else {
        struct Record* pointer = list->head;
        while (pointer->next != NULL) {
            pointer = pointer->next;
        }
        pointer->next = pNew;
        list->count++;
    }
}

void traverse(List* list, char* id) {
    struct Record* pointer = list->head;
    while(pointer != NULL && strcmp(pointer->id, id) != 0) {
        pointer = pointer->next;
    }
    if (pointer == NULL){
        printf("ID not found !!!");
    }
    else {
        printf("%s\n", pointer->id);
        printf("%s\n", pointer->name);
        printf("%ld\n", pointer->sales);
        double comm = pointer->sales * 0.02;
        printf("%.2lf\n", comm);
        printf("%ld\n", pointer->salary);
        printf("%.2lf\n", pointer->salary + comm);
    }
}

int main() {
    struct List* mylist = createList();
    int n;
    char id[10];
    char name[100];
    long salary;
    long sales;
    char find[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %ld %ld", id, name, &salary, &sales);
        insert(mylist, id, name, salary, sales);
    }
    scanf("%s", find);
    traverse(mylist, find);
    // Remember to free allocated memory for each node's data
    Record* current = mylist->head;
    while (current != NULL) {
        free(current->id);
        free(current->name);
        Record* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}
