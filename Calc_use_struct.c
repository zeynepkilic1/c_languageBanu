#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit() 

struct calculator {
    int choice;
    int howmanynumbers;
    int numbers[howmanynumbers];
    int result;
};

int main() {
    printf("Which operation do you want to perform? \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus \n");
    printf("6. Exit \n");
    
    struct calculator calc; // Here we create a variable of type calculator and name it calc.
    printf("Enter your choice: ");
    scanf("%d", &calc.choice); // Here we access the choice variable of the calc variable.
    
    printf("How many numbers do you want to perform the operation on? ");
    scanf("%d", &calc.howmanynumbers); // Here we access the howmanynumbers variable of the calc variable.
   
    for (int i = 0; i < calc.howmanynumbers; i++) {  // Here we use a for loop to access the numbers array of the calc variable.
        printf("Enter number %d: ", i + 1);
        scanf("%d", &calc.numbers[i]);
    }
    calc.result = calc.numbers[0];
    switch (calc.choice) {
        case 1:
            for (int i = 1; i < calc.howmanynumbers; i++) {
                calc.result += calc.numbers[i];
            }
            printf("The result is %d", calc.result);
            break;
        case 2:
            for (int i = 1; i < calc.howmanynumbers; i++) {
                calc.result -= calc.numbers[i];
            }
            printf("The result is %d", calc.result);
            break;
        case 3:
            for (int i = 1; i < calc.howmanynumbers; i++) {
                calc.result *= calc.numbers[i];
            }
            printf("The result is %d", calc.result);
            break;
        case 4:
            for (int i = 1; i < calc.howmanynumbers; i++) {
                calc.result /= calc.numbers[i];
            }
            printf("The result is %d", calc.result);
            break;
        case 5:
            for (int i = 1; i < calc.howmanynumbers; i++) {
                calc.result %= calc.numbers[i];
            }
            printf("The result is %d", calc.result);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice");
    }
    return 0;
}


