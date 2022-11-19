//Write a program when ‘Akif’, name and 
// ‘Istanbul’ city age 36, go Univ. do not use if.


#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    // use switch case for this problem
//  switch name = "Akif"; and age 36 go to university

    char name[20];
    char city[20];
    int age;
    int university;

    switch (university) {
        case 1:
            strcpy(name, "Akif");
            strcpy(city, "Istanbul");
            age = 36;
            printf("Name: %s\nCity: %s\nAge: %d\n", name, city, age);
            break;
        default:
            printf("You are not in university.\n");
            break;
    }

    return 0;
}
