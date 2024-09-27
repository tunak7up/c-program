#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	char *token = strtok(c, " ");
	int cnt = 0;
	
	while(token != NULL){
		cnt++;
		token = strtok(NULL, " ");
	}
	printf("%d ", cnt);
	printf("%s", c);
} 
