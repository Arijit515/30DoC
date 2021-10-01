#include <stdio.h>
#include <string.h>

int main() {
   char str[10][50], temp[50];
   printf("Enter 10 words: ");

   for (int i = 0; i < 10; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   for (int i = 0; i < 10; ++i) {
      for (int j = i + 1; j < 10; ++j) {
          
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 10; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}