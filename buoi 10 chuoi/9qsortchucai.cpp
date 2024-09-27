#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(*x < *y) return -1;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[1001];
		gets(c);
		qsort(c, strlen(c), sizeof(char), check);
		for(int i = 0; i < strlen(c); i++){
			printf("%c", c[i]);
		}
	}
}
