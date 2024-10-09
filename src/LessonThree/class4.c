#include<stdio.h> 
#include<string.h> 
#include <stdbool.h>
int checkPass();
char firstPassword[100];
char secondPassword[100];
bool logged = false;
int main(int argc, char const *argv[])
{
   checkPass();
    return 0;
}


int checkPass() {
    printf("Enter Ur password:\n");
    fgets(firstPassword,sizeof(firstPassword),stdin);
    
    printf("Confirm password:\n");
    fgets(secondPassword,sizeof(secondPassword),stdin);

   while (!logged)
   {
    if( strcmp(firstPassword,secondPassword) != 0)
   {

    printf("Wrong password.. Enter Correct password\n");
    printf("Confirm password:\n");
    fgets(secondPassword,sizeof(secondPassword),stdin);
   }
   
   else{
    printf("Correct password.. You've Loged in\n");
    break;
   }

   }
   
}