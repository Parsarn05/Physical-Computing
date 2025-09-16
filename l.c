#include <stdio.h>
#include <string.h>
#define N 20

struct student_info {
    char fname[61];
    char lname[61];
    char sex[8];
    int id, age;
    float gpa;
};

int main() {
    struct student_info student_info[N];

    // Input
    for (int i = 0; i < N; i++) {
        scanf("%s %s %s %d %d %f",
              student_info[i].fname,
              student_info[i].lname,
              student_info[i].sex,
              &student_info[i].id,
              &student_info[i].age,
              &student_info[i].gpa);
    }

    char sort_by[10];
    scanf("%9s", sort_by);

    // Sort
    struct student_info temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int cmp = 0;
            if (strcasecmp(sort_by, "name") == 0)
                cmp = strcasecmp(student_info[i].fname, student_info[j].fname);
            else if (strcasecmp(sort_by, "surname") == 0)
                cmp = strcasecmp(student_info[i].lname, student_info[j].lname);
            else if (strcasecmp(sort_by, "id") == 0)
                cmp = (student_info[i].id > student_info[j].id) -
                      (student_info[i].id < student_info[j].id);

            if (cmp > 0) {
                temp = student_info[i];
                student_info[i] = student_info[j];
                student_info[j] = temp;
            }
        }
    }

    // Output
    for (int i = 0; i < N; i++) {
        char sexx[6];
        if (strcmp(student_info[i].sex, "Male") == 0)
            strcpy(sexx, "Mr");
        else
            strcpy(sexx, "Miss");

        printf("%s %c %s (%d) ID: %d GPA %.2f\n",
               sexx,
               student_info[i].fname[0],
               student_info[i].lname,
               student_info[i].id,
               student_info[i].age,
               student_info[i].gpa);
    }
    return 0;
}
