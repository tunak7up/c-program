#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strcmp(x, y) < 0) return -1;
	return 1;
}

int main(){
	char c[1001];
	char d[1001];
	char a[20][50];
	int n = 0;
	gets(d);
	gets(c);
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	char *token2 = strtok(d, " ");
	int m = 0;
	char a1[20][50];
	while(token2 != NULL){
		int ok = 1;
		for(int i = 0; i < n; i++){
			if(strcmp(token2, a[i]) == 0){
				ok = 0;
				break;
			}
		}
		if(ok == 1){
			strcpy(a1[m], token2);
			m++;
		}
		token2 = strtok(NULL, " ");
	}
	qsort(a1, m, sizeof(a1[0]), cmp);
	for(int i = 0; i < m; i++){
		while(strcmp(a1[i], a1[i+1]) == 0){
			i++;
		}
		printf("%s ", a1[i]);
	}


}


