#include <stdio.h>

int main() {
    char firstname[20], lastname[20];
    char nickname[20];
    char id[8];

    scanf("%s %s", firstname, lastname);
    scanf("%s", nickname);
    scanf("%s", id);

    printf("Hello World, my name is %s (%s)\n", nickname, firstname);
    printf("\n");
    printf("Student ID: %s\n", id);
    printf("Name: %s %s\n", firstname, lastname);
    printf("Nickname: %s\n", nickname);

    return 0;
}