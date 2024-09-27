#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1001];
	gets(c);
	char *token = strtok(c, " ");
	char a[100][100];
	int n = 0;
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int ok = -1;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(strcmp(a[i], a[j]) == 0){
				printf("%s", a[i]);
				ok = 1;
				break;
			}
		}
		if(ok == 1) break;
	}
	if(ok == -1){
		printf("-1");
	}
}
