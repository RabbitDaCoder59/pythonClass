#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char userOneName[40];
char userTwoName[40];

int userOneNumbers[20];
int userTwoNumbers[20];

int userOneTotal;
int userTwoTotal;

const int targetNumber = 17;

int attempts = 0;

#define max_Number 2
int getUserTotal(int numbers[3]);

int choice;
int  main() {
    printf("Hello Friend Welcome To LuckyNumberGame.\n");

    printf("User One, Please Enter a Nick Name: \n");

    fgets(userOneName,sizeof(userOneName),stdin);

    printf("User Two, Please Enter a Nick Name: \n");
    fgets(userTwoName,sizeof(userTwoName),stdin);


        
   printf("user: %s your turn ", userOneName);
   printf("Press '1' to ask for a number or '1' to skip \n");   
   scanf("%s",&choice);
   if(choice == 1){
    printf("This is it");
   }
      

return 0;
}