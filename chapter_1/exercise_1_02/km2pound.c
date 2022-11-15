//this is kilometer to pound and ton conversion program
//with a while loop
//to pound and ton conversion program

#include <stdio.h>

int main(){
    float km, pound;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    km = lower;
    while (km <= upper){
        pound = km * 2.2046;
        printf("%3.0f %6.1f \n", km, pound);
        km = km + step;
    }
    return 0;
}
