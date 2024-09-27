#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int strcmp1(char a[], char b[]){
	if(strlen(a) != strlen(b)){
		return 0;
	}
	for(int i = 0; i < strlen(a); i++){
		if(tolower(a[i]) != tolower(b[i])){
			return 0;
		}
	}
	return 1;
}
	

int main(){
	int t; scanf("%d", &t);
	getchar();
	int luot = 1;
	while(t--){
		printf("luot la %d\n", luot);
		luot++;
		char c[1001];
		gets(c);
		char b[101];
		gets(b);
		char *token = strtok(c, " ");
		char a[20][50];
		int n = 0;
		while(token != NULL){
			strcpy(a[n], token);
			n++;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n-1; i++){
			if(strcmp1(a[i], b) == 0){
				printf("%s ", a[i]);		
			}
		}
		if(strcmp1(a[n-1], b) == 0){
			printf("%s", a[n-1]);
		}
		printf("\n");
	}
}
