#include<stdio.h> 
#include<string.h> 
 
int main() 
{ 
    char name[100]; 
    
   printf("Enter a Sentence: \t");
   fgets(name,sizeof(name),stdin);
   int i=0; 
   while(name[i] != '\0')
   {
     if (name[i] == ' ' || name[i] == '\n' || name[i] == '\t')
    {
        printf("\n");
    } else {
        printf("%c",name[i]);
    }
    i++;
   }
   
   
 
    return 0; 
} 