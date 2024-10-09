#include <stdio.h>

int main() {
    int array[3][2]; // Declaring a 3x2 multidimensional array

    // Using a nested for loop to add integers to the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter an integer for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Printing the array
    printf("The array elements are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
