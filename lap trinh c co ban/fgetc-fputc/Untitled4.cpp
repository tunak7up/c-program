#include<stdio.h>

 
int main() {
 FILE *fp;
 char c;
  
 fp=fopen("vd.txt", "r");
  
 while ((c = fgetc(fp)) != EOF) {
  printf("%c", c);
 }
 fclose(fp);
}
