#include <stdio.h>

int main() {
    char firstname[30], lastname[30];
    int id, dd, mm, yyyy;
    float gpa;

    scanf("%30s", firstname);
    scanf("%30s", lastname);
    scanf("%d", &id);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yyyy);
    printf("GPA: %.2f\n", gpa);

    return 0;
}