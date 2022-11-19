#include <stdio.h>
#include <stdlib.h>

int main() {
    int feet = 10;
    double METERStofeet = 0.305;
     int maxFeet = 50;
     int feetIncrement = 5;

    printf("Feet\tMeters\n");
    while (feet <= maxFeet) {
        double meters = feet * METERStofeet;
        printf("%d\t%.3f\n", feet, meters);
        feet += feetIncrement;
    }

return 0;
}
