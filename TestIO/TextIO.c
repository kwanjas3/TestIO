#include <stdio.h>
#include <stdlib.h>

int main(void) {
   FILE *textout;
   textout = fopen("hellotext.txt", "w");
   fprintf(textout, "hello, this is a test \n");
   fclose(textout);

   /*opening file to read the string*/
   textout = fopen("hellotext.txt", "r");
   char str[256];
   fscanf(textout, "%256[^\n]", str);
   printf("%s", str);
   return 0;
}