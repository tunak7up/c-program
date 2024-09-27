#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1001];
	gets(c);
	char *token = strtok(c, " ");
	char a[20][50];
	int n = 0;
	char xoa[11];
	gets(xoa);
	while(token != NULL){
		if(strcmp(token, xoa) != 0){
			strcpy(a[n], token);
			n++;
		}
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		printf("%s ", a[i]);
	}
}
