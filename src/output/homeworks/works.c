#include <stdio.h>

int main() {
   User();
    
    return 0;
}
int User() {
     char user_name[50];
    int user_age;
    int min_age = 7;
     printf("what is your name: ");
    scanf("%s",&user_name);
    printf("How old are you: ");
    scanf("%d",&user_age);
    if (user_age+min_age >= 30)
    {
        int total_age = user_age + min_age;
        printf("%s you are very old man Join the party... u de bad \n",user_name);
        printf("your age is %d + %d it make you %d years old ",user_age,min_age,total_age);
        
    }else
    {
         int total_age = user_age + min_age;
        printf("%s you are still a young man wait for ur time \n",user_name);
        printf("your age is %d + %d it make you %d years old \n",user_age,min_age,total_age);
    }
}