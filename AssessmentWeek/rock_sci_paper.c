//Write a program that lets the user play the game of Rock, Paper, Scissors against the computer.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computerChoice;
    int userChoice;
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int maxChoice = 3;
    int choiceIncrement = 1;

    srand(time(NULL));
    computerChoice = rand() % maxChoice + choiceIncrement;

    printf("Enter your choice of rock, paper, or scissors: ");
    scanf("%d", &userChoice);

    while (userChoice <= maxChoice) {
        if (computerChoice == rock) {
            printf("The computer chose rock.\n");
        } else if (computerChoice == paper) {
            printf("The computer chose paper.\n");
        } else if (computerChoice == scissors) {
            printf("The computer chose scissors.\n");
        }

        if (userChoice == rock) {
            printf("You chose rock.\n");
        } else if (userChoice == paper) {
            printf("You chose paper.\n");
        } else if (userChoice == scissors) {
            printf("You chose scissors.\n");
        }

        if (computerChoice == rock && userChoice == scissors) {
            printf("Rock wins!\n");
        } else if (computerChoice == scissors && userChoice == paper) {
            printf("Scissors wins!\n");
        } else if (computerChoice == paper && userChoice == rock) {
            printf("Paper wins!\n");
        } else if (computerChoice == userChoice) {
            printf("It's a tie! Play again.\n");
        }

        break;
    }

    return 0;
}
