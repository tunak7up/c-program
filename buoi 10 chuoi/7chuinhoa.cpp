#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(isupper(c[i]) == 0){
			return 0;
		}
	}
	return 1;
} 

int main(){
	int t; scanf("%d", &t);
	scanf("\n");
	while(t--){
		char c[1001];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			if(check(token)){
				printf("%s\n", token);
			}
			token = strtok(NULL, " ");
		}
	}
}
