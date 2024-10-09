#include <stdio.h>

int main() {
   char sentence[100];
   printf("Enter a sentence: ");
   fgets(sentence, sizeof(sentence), stdin);  // Read input from user

   printf("Words in the sentence:\n");
   int i = 0;
   while (sentence[i] != '\0') {  // Loop until end of string
      if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') { // Check for word separator
         printf("\n");  // Print new line to separate words
      } else {
         printf("%c", sentence[i]);  // Print character of word
      }
      i++;
   }
   return 0;
}
