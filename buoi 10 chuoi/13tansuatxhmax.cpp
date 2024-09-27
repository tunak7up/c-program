#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x, y) < 0) return -1;
	return 1;
}

int main(){
	char c[1001];
	char a[20][50];
	gets(c);
	strlwr(c);
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	qsort(a, n, sizeof(a[0]), cmp);
	int b[n] = {0};
	int cnt[n] = {0};
	int max = -1;
	int m;
	for(int i = 0; i < n; i++){
		if(b[i] == 0){
			cnt[i]++;
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt[i]++;
					b[j] = 1;
				}
			}
		}
		if(cnt[i] > max){
			max = cnt[i];
			m = i;
		}
	}
	printf("%s %d", a[m], max);
}
