#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	gets(c);
	int cnt[256] = {0};
	int max = -1;
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]]++;
	}
	char m;
	for(int i = 0; i < 256; i++){
		if(cnt[i]){
			if(cnt[i] >= max){
				max = cnt[i];
				m = (char)i;
			}
		}
	}
	
	printf("%c %d", m, max);
}
