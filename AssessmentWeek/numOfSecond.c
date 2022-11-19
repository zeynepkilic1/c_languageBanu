//Write a program that asks the user to enter a number of seconds and works as follows:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int seconds;
    int minutes;
    int hours;
    int days;
    int maxSeconds = 86400;
    int secondsIncrement = 1;

    printf("Enter a number of seconds: ");
    scanf("%d", &seconds);

    while (seconds <= maxSeconds) {
        minutes = seconds / 60;
        hours = seconds / 3600;
        days = seconds / 86400;
        printf("%d seconds is equal to %d minutes, %d hours, and %d days.\n", seconds, minutes, hours, days);
        seconds += secondsIncrement;
    }

    return 0;
}
