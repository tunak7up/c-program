#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check(char c[]){
	int l = 0; 
	int r = strlen(c) - 1;
	while(l < r){
		if(c[l] != c[r]){
			return 0;
		}
		l++; 
		r--;
	}
	return 1;
}

int main(){
	char c[1001];
	gets(c);
	if(check(c)){
		printf("YES");
	}
	else printf("NO");
}
