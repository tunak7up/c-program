#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	gets(c);
	strlwr(c);
	int cnt[26] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i] - 'a'] = 1;
	}
	int check = 1; 
	for(int i = 0; i < 26; i++){
		if(cnt[i] == 0){
			check = 0;
		}
	}
	if(check == 0){
		printf("NO");
	}
	else printf("YES");
}
