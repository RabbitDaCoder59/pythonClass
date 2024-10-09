#include <stdio.h>
#include <string.h>

int main() {
    // float Real_num[6] = {2.3,3.4,4.3,7.2,4.5,6.6};
int i;
    // for ( i = 0; i < sizeof(Real_num); i++)
    // {
    //     printf("%f\n",Real_num[i]);
    // }
    // char *name;
    // name = "Daniel";
    // for ( i = 0; i < 7; i++)
    // {
    //     printf("%s",name[i]);
    // }
    
    // // printf(name);

    char MyName[4];
    strcpy(MyName,"ABCD");
    // printf(MyName);
    for ( i = 0; i < 6; i++)
    {
        printf("%s",MyName[i]);
    }
    
    return 0;
}


