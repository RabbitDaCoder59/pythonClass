#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char firstPassword[100];
    char secondPassword[100];
    int value;
    bool isLoggedIn = false;

    printf("Enter your password:\n");
    fgets(firstPassword, sizeof(firstPassword), stdin);

    printf("Confirm password:\n");
    fgets(secondPassword, sizeof(secondPassword), stdin);

    value = strcmp(firstPassword, secondPassword);

    while (!isLoggedIn) {
        if (value == 0 && strlen(firstPassword) == strlen(secondPassword)) {
            printf("Correct password. You have logged in.\n");
            isLoggedIn = true;
        } else {
            printf("Wrong password. Enter correct password:\n");
            fgets(firstPassword, sizeof(firstPassword), stdin);
            printf("Confirm password:\n");
            fgets(secondPassword, sizeof(secondPassword), stdin);
            value = strcmp(firstPassword, secondPassword);
        }
    }

    return 0;
}
