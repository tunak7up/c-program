#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[100];
	gets(c);
	int take = 0;
	for(int i = 0; i < strlen(c)-1; i++){
		while(c[i+1] == c[i]){
			take++;
			i++;
		}
	}
	printf("%d", take);
}
