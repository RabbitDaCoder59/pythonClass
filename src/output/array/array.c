#include <stdio.h>
float data[5];
float total;
float average;
int main()
{
    printf("number 1: \n");
    scanf("%f",&data[0]);
    printf("number 2: \n");
    scanf("%d",&data[1]);
     printf("number 3: \n");
    scanf("%d",&data[2]);
     printf("number 4: \n");
    scanf("%d",&data[3]);
     printf("number 5: \n");
    scanf("%d",&data[4]);
    
    total = data[0] + data[1] + data[2] + data[3] + data[4];
    average = total / 5.0;
    printf("Total %f Average %f\n", total, average);
    
    return 0;
}