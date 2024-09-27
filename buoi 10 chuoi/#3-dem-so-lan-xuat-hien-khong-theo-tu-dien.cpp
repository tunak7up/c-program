#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	gets(c);
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i] - 'a']++;
	}
	for(int i = 0; i < strlen(c); i++){
		if(cnt[c[i] - 'a']){
			printf("%c %d\n", c[i], cnt[c[i] - 'a']);
			cnt[c[i] - 'a'] = 0;
		}
	}
}
