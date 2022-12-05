#include <stdio.h>

int main()
{
  //Here if we use 'if' then no need semi colon. 
  
    if (printf("Hello World")){}
    
    return 0;
}
##################################################################
// or
// we can use switch



int main()
{
    switch(printf("Hello World")){}

    return 0;
}
##################################################################
// or
// we can use while loop

int main()
{
    while (! printf("Hello World")){}
    
    return 0;
}
##################################################################
// or
// we can use d0 while loop
int main()
{
    do{} while (! printf("Hello World"));

    return 0;
}
#################################################################
// and we can use for loop 
int main()
{
    for (;!printf("Hello World");){}
    
    return 0;
}

##################################################################

#include <stdio.h>
#define SHOW printf("Hello World")

int main()
{
 // Printing hello world without semicolon using macros.
    if (SHOW){}
    
    return 0;
}

##################################################################

#include <stdio.h>

// Printing hello world without semicolon using command line arguments.
int main(int agrc, char *agrv[printf("Hello World")]){}
