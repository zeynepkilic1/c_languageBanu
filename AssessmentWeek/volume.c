//The formula for the volume of a sphere is 𝑉 = (4 /3) 𝜋 𝑎 ^2 𝑏 where a and b are the half-lengths 

#include "stdio.h"
#include "stdlib.h"

int main() {
    float a;
    float b;
    float volume;

    printf("Enter the half-lengths of the major and minor axes: ");
    scanf("%f", &a);
    printf("Enter the half-lengths of the major and minor axes: ");
    scanf("%f", &b);

    volume = (4.0 / 3.0) * 3.14 * a * a * b;

    printf("The volume of the sphere is %.2f\n", volume);     return 0; }
