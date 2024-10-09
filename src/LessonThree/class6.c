#include <stdio.h>
int numbers[4][5];
int main() {
for (int i = 0; i < 4; i++)
{
    printf("first Loop at index %i \n",i);

    for ( int x = 0; x < 5; x++)
    {
       numbers[x][i] = x+i;
       printf("second Loop at index %d \n", &numbers[x][i]);
    }
    
}

    // for (int i = 0; i < 10; i++)
    // {
    //    printf("the first index => %i \n",i);
    //    for (int x = 5; x > 0; x--)
    //    {
    //     printf("the second index => %d \n",x);
    //    }
       
    // }
//  int i,y, number[3];
//     for (i = 0; i < 5; i++)
//     {

//            printf("the Index ==> %d \n",number[i]); 
       
        
        
//     }
    
    int i,arr[5][2];
    for(i=0;i<5;i++){
        
        arr[i][i] = (i + 1);
        printf("%d%d \n",arr[i][i]);
}
    return 0;
}