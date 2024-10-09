#include <stdio.h>
int main()
{
  char Name[40];
  char socialSecurityCode[40];
  char Dob[40];
printf("What Is your name: ");
scanf("%s",&Name);

printf("What Is your security code: ");
scanf("%s",&socialSecurityCode);

printf("When Is your Date of birth: ");
scanf("%s",&Dob);

printf("%s\n",Name);
printf("%s\n",socialSecurityCode);
printf("%s\n\n",Dob);

    int height = 7;
  int width = 5;
  int i, j;

  for (i = 0; i < height; i++) {
      for (j = 0; j < width; j++) {
          if (i == 0 || i == height - 1 || i == height / 2 || j == 0) {
              printf("*");
          } else if (j == width - 1 && (i == 1 || i == height / 2 - 1 || i == height / 2 + 1)) {
              printf("*");
          } else {
              printf(" ");
          }
      }
      printf("\n");
  }

return 0;
}