#include <stdio.h>
#include <string.h>

int main() {
    struct student_info {
        char fname[61];
        char lname[61];
        char sex[8];
        int id, age;
        float gpa;
    };
    struct student_info s;
    scanf("%s %s %s %d %d %f", s.fname,s.lname,s.sex, &s.id, &s.age, &s.gpa);
    char sexx[5];
    if (strcmp(s.sex,"Male") == 0) {
        strcpy(sexx,"Mr");
    }
    else {
        strcpy(sexx,"Miss");
    }
    printf("%s %c %s (%d) ID: %d GPA %.2f",sexx,s.fname[0],s.lname,s.id,s.age,s.gpa);
    return 0;
}