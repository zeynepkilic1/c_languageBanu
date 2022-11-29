
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main() {
    printf("Which operation do you want to perform? \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus \n");
    printf("6. Exit \n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int howmanynumbers;
    printf("How many numbers do you want to perform the operation on? ");
    scanf("%d", &howmanynumbers);
    int numbers[howmanynumbers];
    for (int i = 0; i < howmanynumbers; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int result = numbers[0];
    switch (choice) {
        case 1:
            for (int i = 1; i < howmanynumbers; i++) {
                result += numbers[i];
            }
            printf("The result is %d", result);
            break;
        case 2:
            for (int i = 1; i < howmanynumbers; i++) {
                result -= numbers[i];
            }
            printf("The result is %d", result);
            break;
        case 3:
            for (int i = 1; i < howmanynumbers; i++) {
                result *= numbers[i];
            }
            printf("The result is %d", result);
            break;
        case 4:
            for (int i = 1; i < howmanynumbers; i++) {
                result /= numbers[i];
            }
            printf("The result is %d", result);
            break;
        case 5:
            for (int i = 1; i < howmanynumbers; i++) {
                result %= numbers[i];
            }
            printf("The result is %d", result);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice");
    }
    return 0;
}


    
