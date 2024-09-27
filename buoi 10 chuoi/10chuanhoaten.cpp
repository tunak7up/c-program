#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	char c[1001];
	char a[20][50];
	gets(c);
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n], token);
		chuanhoa(a[n]);
		n++;
		token = strtok(NULL, " ");
	}
	printf("%s, ", strupr(a[n-1]));
	for(int i = 0; i < n-1; i++){
		printf("%s", a[i]);
		if(i != n-2) printf(" ");
	}
}
