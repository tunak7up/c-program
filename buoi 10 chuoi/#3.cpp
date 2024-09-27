#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
	char c[1000];
	fgets(c, 1001, stdin);
	for(int i = 0; i < strlen(c); i++){
		if(isupper(c[i])){
			c[i] = tolower(c[i]);
		}
	}
	printf("%s", c);
} 
