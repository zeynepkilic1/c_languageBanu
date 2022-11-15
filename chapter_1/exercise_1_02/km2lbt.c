//kilometer to  lb/ton conversion program
#include <stdio.h>

int main(){
    float km, lb, ton;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    km = lower;
    while (km <= upper){
        lb = km * 2.2046;
        ton = lb / 2000;
        printf("%3.0f %6.1f %6.1f \n", km, lb, ton);
        km = km + step;
    }
    return 0;

}