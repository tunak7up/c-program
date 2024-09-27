#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[10001];
		gets(c);
		int cnt[256] = {0};
		for(int i = 0; i < strlen(c); i++){
			cnt[c[i]]++;
		}
		for(int i = 0; i < strlen(c); i++){
			if(cnt[c[i]] == 1) printf("%c", c[i]);
		}
		printf("\n");
	}
}
