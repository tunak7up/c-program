#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	gets(c);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i])
		printf("%c %d\n", i, cnt[i]);
	}
}
