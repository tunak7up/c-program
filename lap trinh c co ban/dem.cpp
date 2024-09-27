#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1001];
	gets(c);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			cnt[c[i]]++;
		}
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i] != 0){
			printf("%c %d\n",i, cnt[i]);
		}
	}
}
