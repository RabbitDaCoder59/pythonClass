#include <stdio.h>

int main() {
    char user_name[50];
    char sister_name[50];
    int user_age, sister_age;

    printf("Please enter your name: ");
    scanf("%s", &user_name);

    printf("Please enter your sister's name: ");
    scanf("%s", &sister_name);

    printf("Please enter your age: ");
    scanf("%d", &user_age);

    printf("Please enter your sister's age: ");
    scanf("%d", &sister_age);

    printf("\n%s is %d years old.\n", user_name, user_age);
    printf("%s is %d years old.\n", sister_name, sister_age);

    int total_age = user_age + sister_age;
    printf("\nThe total age of %s and %s is %d.\n", user_name, sister_name, total_age);
 
    return 0;
}
