#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void sx(char a[][50], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[i]) < 0){
				char tmp[100];
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	scanf("\n");
	while(t--){
		char c[1001];
		int n = 0;
		gets(c);
		char a[20][50];
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			n++;
			token = strtok(NULL, " ");
		}
		sx(a, n);
		for(int i = 0; i < n; i++){
			printf("%s\n", a[i]);
		}
		printf("\n");
	}	
}
