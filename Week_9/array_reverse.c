#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, *arrays, i;
    scanf("%d", &number);
    arrays = (int*) malloc(number * sizeof(int));
    for(i = 0; i < number; i++) {
        scanf("%d", arrays + i);
    }


    /* Write the logic to reverse the array. */
    //    burada array tersi alınacak ve yazdırılacak

    for(i = 0; i < number; i++)
        printf("%d ", *(arrays + i));
    return 0;
}
