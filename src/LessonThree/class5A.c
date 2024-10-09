#include <stdio.h>
#include <string.h>

#define MAX_ATTEMPTS 4

int main() {
    char password1[50];
    char password2[50];
    int attempts = 1;
    
    do {
        printf("Enter your password: ");
        scanf("%s", password1);
        printf("Confirm your password: ");
        scanf("%s", password2);
        
        if (strcmp(password1, password2) != 0) {
            printf("Passwords do not match. Please try again.\n");
            attempts++;
        }
        else {
            printf("Passwords match!\n");
            break;
        }
    } while (attempts <= MAX_ATTEMPTS);

    if (attempts > MAX_ATTEMPTS) {
        printf("Maximum attempts reached. Please try again later.\n");
    }

    return 0;
}
