// compare name surname 


#include "stdio.h"
#include "string.h"

#define name "Akif"
#define age 32
#define favnum 3.14


int main() {
    printf("Enter your name :");
    scanf("%s", name);
    printf("Enter your age :");
    scanf("%d", age);
    printf("Enter your favnum :");
    scanf("%f", favnum);


    if (strcmp(name, "Akif") == 0 && age == 32 && favnum == 3.14) {
        printf("You are Akif, I know who you are man, my favorite teacher");
    } else {
        printf("You are not Akif, I don't know who you are as I am not that clever");

        return 0;

    }
