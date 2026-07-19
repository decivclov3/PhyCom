#include <stdio.h>

int main() {
    char fname1[100], sname1[100], person2[100], person3[100];

    scanf("%99s", fname1);
    scanf("%99s", sname1);
    scanf(" %99[^\n]", person2);
    scanf(" %99[^\n]", person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);
}