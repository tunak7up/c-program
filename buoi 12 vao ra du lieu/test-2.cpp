#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



int main() {
 FILE *fp;
 char c;
  
 fp=fopen("vidu.txt", "r");
  
 while ((c = fgetc(fp)) != EOF) {
  printf("%c", c);
 }
 fclose(fp);
}

