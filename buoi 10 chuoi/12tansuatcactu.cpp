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
	gets(c);

	int n = 0;
	char a[20][50];
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int b[n] = {0};
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0; i < n; i++){
		if(b[i] == 0){
			int cnt = 1;
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}
