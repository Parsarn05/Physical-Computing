#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[61];
    char surname[61];
    char sex[10];
    int age;
    char id[13];
    float gpa;
} Student_info;

int main() {
    Student_info student[20];
    char type[10];
    int i, j;

    // รับข้อมูลนักเรียน
    for (i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %f",
              student[i].name,
              student[i].surname,
              student[i].sex,
              &student[i].age,
              student[i].id,
              &student[i].gpa);
    }

    // รับประเภทการเรียง
    scanf("%s", type);

    // เรียงข้อมูล
    for (i = 0; i < 20; i++) {
        for (j = i + 1; j < 20; j++) {
            int swap = 0;

            if (tolower(type[0]) == 'n') {
                if (strcmp(student[i].name, student[j].name) > 0)
                    swap = 1;
            } else if (tolower(type[0]) == 's') {
                if (strcmp(student[i].surname, student[j].surname) > 0)
                    swap = 1;
            } else {
                if (strcmp(student[i].id, student[j].id) > 0)
                    swap = 1;
            }

            if (swap) {
                Student_info temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }

    // แสดงผล
    for (i = 0; i < 20; i++) {
        if (strcmp(student[i].sex, "Male") == 0)
            printf("Mr %c %s (%d) ID: %s GPA %.2f\n",
                   student[i].name[0],
                   student[i].surname,
                   student[i].age,
                   student[i].id,
                   student[i].gpa);
        else
            printf("Miss %c %s (%d) ID: %s GPA %.2f\n",
                   student[i].name[0],
                   student[i].surname,
                   student[i].age,
                   student[i].id,
                   student[i].gpa);
    }

    return 0;
}
