#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int len, middle;

    printf("Enter your name: ");
    scanf("%s", name);

    len = strlen(name);
    middle = len / 2 - 1;

    printf("The three middle letters in your name are: %c%c%c\n", name[middle], name[middle+1], name[middle+2]);

    return 0;
}
