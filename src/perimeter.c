#include <stdio.h>

// float Area(float lenght , float width) {
//    2*(lenght + width);

//  return lenght + width;
// }

int main() {

    float lenght,width,perimeter;
    printf("Enter the lenght:\n");
    scanf("%f", &lenght);
    printf("Enter the width:\n");
    scanf("%f", &width);
    int perimeter = 2*(lenght + width);
    printf("%f",perimeter);
    
    // printf("perimeter of rectangle = %f units",perimeter);
    return 0;
}