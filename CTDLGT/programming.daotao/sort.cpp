#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int cmp(const void *a, const void *b){
	int *x = (int*)a; 
	int *y = (int*)b; 
	if(*x > *y){
		return 1; 
	}
	else return -1; 
}
int main(){
	int n; scanf("%d", &n); 
	int *a = (int*)malloc(1000000 * sizeof(int)); 
	if(a == NULL){
		printf("Loi khong the cap phat bo nho"); 
		return 1; 
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]); 
	}
	qsort(a, n, sizeof(int), cmp); 
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]); 
	}
	free(a); 
	return 0; 
}
