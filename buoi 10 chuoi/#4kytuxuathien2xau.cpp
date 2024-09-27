#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1001];
	char d[1001];
	gets(c);
	gets(d);
	int cntc[256] = {0};
	int cntd[256] = {0};
	for(int i = 0; i < strlen(c); i++){
		cntc[c[i]]++;
	}
	for(int i = 0; i < strlen(d); i++){
		cntd[d[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cntc[i] != 0 && cntd[i] != 0){
			printf("%c ", i);
		}
	}
}
