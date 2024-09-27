#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct num{
	char val[100];
	int fre;
};
num a[1000];

int tn(char a[]){
	if(strlen(a) == 1) return 0;
	int l = 0; 
	int r = strlen(a) - 1;
	while(l < r){
		if(a[l] != a[r]){
			return 0;
		}
		l++;
		r--;
	}
	return 1;
}
int cmp(const void *a, const void *b){
	num *x = (num*)a;
	num *y = (num*)b;
	if(x->fre > y->fre){
		return -1;
	}
	return 1;
}

int main(){
	char x[100];
	int n = 0;
	while(scanf("%s", x) != -1){
		if(tn(x)){
			int pos = 1;
			for(int i = 0; i < n; i++){
				if(strcmp(x, a[i].val) == 0){
					a[i].fre++;
					pos = 0;
					break;
				}
			}
			if(pos == 1){
				n++;
				strcpy(a[n-1].val, x);
				a[n-1].fre = 1;
			}
		}
	}
	qsort(a, n, sizeof(num), cmp);
	for(int i = 0; i < n; i++){
		printf("%s %d\n", a[i].val, a[i].fre);
	}
}
