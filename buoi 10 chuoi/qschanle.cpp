#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int tcs(int n){
	int sum = 0;
	while(n != 0){
		sum += (n%10);
		n /= 10;
	}
	return sum;
}

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x % 2 == 0) return -1;
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
