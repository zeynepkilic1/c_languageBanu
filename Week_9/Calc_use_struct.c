
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

union Data {
    int i;
    float f;
    char str[20];
};

struct calculator {
    int choice;
    int howmanynumbers;

    int result;
};

int main(){
    struct calculator cal;
    printf("Which operation do you want to perform? \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus \n");
    printf("6. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &cal.choice);
    printf("How many numbers do you want to perform the operation on? ");
    scanf("%d", &cal.howmanynumbers);
    union Data numbers[cal.howmanynumbers];
    for (int i = 0; i < cal.howmanynumbers; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i].i);
    }
    cal.result = numbers[0].i;
    switch (cal.choice) {
        case 1:
            for (int i = 1; i < cal.howmanynumbers; i++) {
                cal.result += numbers[i].i;
            }
            printf("The result is %d", cal.result);
            break;
        case 2:
            for (int i = 1; i < cal.howmanynumbers; i++) {
                cal.result -= numbers[i].i;
            }
            printf("The result is %d", cal.result);
            break;
        case 3:
            for (int i = 1; i < cal.howmanynumbers; i++) {
                cal.result *= numbers[i].i;
            }
            printf("The result is %d", cal.result);
            break;
        case 4:
            for (int i = 1; i < cal.howmanynumbers; i++) {
                cal.result /= numbers[i].i;
            }
            printf("The result is %d", cal.result);
            break;
        case 5:
            for (int i = 1; i < cal.howmanynumbers; i++) {
                cal.result %= numbers[i].i;
            }
            printf("The result is %d", cal.result);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice");
    }
    return 0;
}
