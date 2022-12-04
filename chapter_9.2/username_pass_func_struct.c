#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" 

struct login
{
    char username[20];
    char password[20];

};


void login(struct login log) {
    char username1[20];
    char password1[20];

    printf("enter your username: ");
    scanf("%s",username1);

    printf("enter your password: ");
    scanf("%s",password1);

    if ((strcmp(log.username,username1)==0) && (strcmp(log.password,password1)==0))
    {
        printf("you are logged in");
    }
    else
    {
        printf("try again");
    }
}

int main() {
    
    struct login log;
    printf("Enter your username: ");
    scanf("%s", log.username);
    printf("Enter your password: ");
    scanf("%s", log.password);
    login(log);
    return 0;
}
