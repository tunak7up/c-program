#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp = fopen("test.txt", "w"); 
	char d; 
	scanf("%c", &d);
	while(isdigit(d) == 1){
		fputc(d , fp); 
		getchar();
		scanf("%c", &d);
	}
	fclose(fp);
	 
	
}
