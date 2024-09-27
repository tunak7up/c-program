#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	fgets(c, 1001, stdin);
	printf("%d\n", strlen(c));
	c[strlen(c) - 1] = '\0';
	int cnta = 0;
	int cntd = 0;
	int cnts = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			cnta++;
		}
		else if(isdigit(c[i])){
			cntd++;
		}
		else cnts++;
	}
	printf("%d %d %d", cnta, cntd, cnts);
}
