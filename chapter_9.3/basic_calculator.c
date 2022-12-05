
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

void calculator() { // calculator function
    int a, b, c; // a, b, c variables
    char d; // d variable
  
    printf("Enter the first number: ");
    scanf("%d", &a); // first number
    printf("Enter the second number: ");
    scanf("%d", &b); // second number
    printf("Enter the operator: ");
    scanf(" %c", &d);
  
    if (d == '+') { // if operator is +
        c = a + b; // add
        printf("The result is: %d", c);
    } else if (d == '-') { // if operator is -
        c = a - b; // subtract
        printf("The result is: %d", c);
    } else if (d == '*') {
        c = a * b;
        printf("The result is: %d", c);
    } else if (d == '/') {
        c = a / b;
        printf("The result is: %d", c);
    } else {
        printf("Invalid operator");
    }

}

int main() {
    calculator();
    return 0;
}
