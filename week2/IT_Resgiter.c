#include<stdio.h>

int main()
{
    char fname[30], lname[30];
    int n = 0;
    int day, month, year;
    float gpa;

    scanf("%s", fname);
    scanf("%s", lname);
    scanf("%d", &n);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);
    
    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %8d\n", n);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f", gpa);
    return 0;
}