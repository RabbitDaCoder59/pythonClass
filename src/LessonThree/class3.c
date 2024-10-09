#include<stdio.h> 
#include<string.h> 

char Lname[100];
char Fname[100];
char value;
int main() {
    printf("Enter Lname\n");
    fgets(Fname,sizeof(Fname),stdin);
    printf("Enter Fname\n");
    fgets(Lname,sizeof(Lname),stdin);
    value = strcmp(Lname,Fname);
    if (value == 0){
        printf("we are same");
    }else {
        printf("we are not same");
    }
    printf("\n");
    if(strlen(Fname) == strlen(Lname)){
        printf("the lenght is same ");
    }else {
         printf("the lenght is not same");
    }
return 0;
}