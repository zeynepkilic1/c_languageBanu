// be sure that the password is entered in * form and not revealed 

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define name "Akif"
#define surname "Cifci"
#define age 36
#define password "crime"

int main() {
    printf("Enter name: ");
    char names[20];
    scanf("%s", names);
    printf("Enter surname: ");
    char surnames[20];
    scanf("%s", surnames);

    printf("Enter age: ");
    int ages;
    scanf("%d", &ages);

    printf("Enter password: ");
    char passwords[20];
    scanf("%s", passwords);

    if (strcmp(names, name) == 0 && strcmp(surnames, surname) == 0 && ages == age && strcmp(passwords, password) == 0) {
        printf("Welcome to the system");
    } else {
        printf("Wrong name/surname/password/age");
    }
    return 0;
}
