// We have created two dimensional array.

#include <stdio.h>

int main() { // this is the main function that will be called when the program is run
    int numbers[2][2]= 
    {
            {1,2}, {3,4}}; //here we have 2 rows and 2 columns in the array

    printf("The first element is %d and the second element is %d \n", numbers[0][0], numbers[0][1]); //prints the first row
    printf("The third element is %d and the fourth element is %d \n", numbers[1][0], numbers[1][1]); //prints the second row
    
    return 0;

}
