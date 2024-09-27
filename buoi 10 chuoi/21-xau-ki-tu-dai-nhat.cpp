#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[101];
	gets(c);
	int cnt[101]; 
	for(int i = 0; i < 101; i++){
		cnt[i] = 1;
	}
	for(int i = 0; i < strlen(c); i++){
		for(int j = 0; j < i; j++){
			if(c[j] < c[i]){
				cnt[i] = cnt[j] + 1;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < strlen(c); i++){
		if(cnt[i] > max){
			max = cnt[i];
		}
	}
	printf("%d", 26 - max);
}
