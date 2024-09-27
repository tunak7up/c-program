#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
	char c[1001];
	char a[20][50];
	gets(c);
	strlwr(c);
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n], token);

		n++;
		token = strtok(NULL, " ");
	}
	
	for(int i = 0; i < n-1; i++){
		printf("%c", a[i][0]);
	}
	printf("%s", a[n-1]);
	printf("@gmail.com");
}
