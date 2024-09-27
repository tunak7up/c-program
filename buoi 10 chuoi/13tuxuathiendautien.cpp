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
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int b[n] = {0};
	for(int i = 0; i < n; i++){
		if(b[i] == 0){
			printf("%s ", a[i]);
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					b[j] = 1;
				}
			}
		}
	}
}
