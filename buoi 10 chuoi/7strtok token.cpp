#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[1001];
	gets(c);
	char *token = strtok(c, " ");
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}
