#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int tcs(int n){
	int sum = 0;
	while(n != 0){
		sum += (n%10);
		n /= 10;
	}
	return sum;
}

int cmp(const void *a, const void *b){ 
// -1 ben trai, 1 ben phai
//khi muon a dung truoc thi return -1 (mot gia tri am)
//khi muon b dung truoc thi return 1 (mot gia tri duong)
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x%2==0 && *y%2==1) return -1;
	if(*x%2==1 && *y%2==0) return 1;
	if(*x%2==0 && *y%2==0) return *y - *x;
	return *x - *y;
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
