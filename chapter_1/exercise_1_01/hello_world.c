#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char name;
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s and your age is %d", name, age);
    return 0;

}

//or we could simply printf("Hello, World!);

// Path: hello_world.c
