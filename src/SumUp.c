#include <stdio.h>
#include <string.h>
int fun();
char name[100];
int main()
{
  fun();
    return 0;
}

int fun() {
      printf("What ur Name\n");
 fgets(name,sizeof(name),stdin);
 printf("%s",name);
 printf("%d",strlen(name));
}