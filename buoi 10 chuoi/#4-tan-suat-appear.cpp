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
		if(cnt[c[i]] > max){
			max = cnt[c[i]];
		}
	}
	char m = '\0';
	for(int i = 0; i < strlen(c); i++){
		if(cnt[c[i]] == max){
			if(c[i] > m){
				m = c[i];
			}
		}
	}
	printf("%c %d", m, max);
}
