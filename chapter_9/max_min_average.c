//Here we aim to find the sum of the elements of an array. We will use a function to do this. The function will take two parameters. The first parameter will be the size of the array and the second parameter will be the array itself. The function will return the sum of the elements of the array.
//The function will be called in the main function. The main function will ask the user to enter the size of the array and the elements of the array. The main function will then call the function and print the sum of the elements of the array.

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }}

int average(int a, int b) {
    return (a + b) / 2;
}

int absolute(int a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }}

int biggest(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    printf("The biggest number is %d\n", biggest(a, b, c));
    printf("The max number is %d\n", max(a, b));
    printf("The min number is %d\n", min(a, b));
    printf("The average number is %d\n", average(a, b));
    printf("The absolute number is %d\n", absolute(a));
    return 0;
}
