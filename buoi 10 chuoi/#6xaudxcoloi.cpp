#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check(char c[]){
	int l = 0; 
	int r = strlen(c) - 1;
	int pen = 0;
	while(l < r){
		if(c[l] != c[r]){
			pen++;
		}
		l++; 
		r--;
	}
	if((strlen(c) % 2) == 1 && pen <= 1){
		return 1;
	}
	else if((strlen(c) % 2) == 0 && pen == 1){
		return 1;
	}
	else return 0;
}

int main(){
	char c[1001];
	gets(c);
	if(check(c)){
		printf("YES");
	}
	else printf("NO");
}
