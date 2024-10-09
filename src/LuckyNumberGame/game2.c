#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char userOneName[100];

char userTwoName[100];

int userOneTotal;

int userTwoTotal;

int userOneNumbers[3];

int userTwoNumbers[3];

const int targetNumber = 17;


int getUserTotal(int numbers[3]);



int main() {
    printf("Hello My friend!\n");
    
    printf("User One , Pick A Nick Name: ");
    
    
    fgets(userOneName,sizeof(userOneName),stdin);
    
    
    printf("User Two , Pick A Nick Name: ");
    
    fgets(userOneName,sizeof(userOneName),stdin);
    
    int counter = 0;
    
    while(counter < 3){
      
       
       for(int i = 0; i < 2; i++){
           if(i%2 == 0){
               printf("user: %c your turn ", userOneName);
               
                printf("Press 'h' to ask for a number or 's' to skip \n");
                
                 char choice;
       
                 scanf("%c",&choice);
                 
                  srand(time(null));
                 
                 if(choice == 'h'){
                    
                     userOneNumbers[counter] = rand()%17+1;
                 }else{
                      userOneNumbers[counter] = 0;
                 }
               
           }else{
               
               printf("user: %s your turn " userTwoName);
               
                printf("Press 'h' to ask for a number or 's' to skip \n");
                
                 char choice;
       
                 scanf("%c", &choice);
                 
                  srand(time(null));
                 
                 if(choice == 'h'){
                    
                     userOneNumbers[counter] = rand()%17+1;
                 }else{
                      userOneNumbers[counter] = 0;
                 }
               
           }
       }
           
       }
       
       
       return 0; 
    }
    
  
