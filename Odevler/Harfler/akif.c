#include<stdio.h>
#include<string.h>

int main()
{
    char name[]="AKIF";
    int i,j,row;
    row=strlen(name);
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");

        
    }
  
    return 0;
}
