#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void in(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	printf("\n");
}

void TRY(int k, int n, int x[]){
	for(int v = 0; v <= 1; v++){
		x[k] = v;
		if(k == n-1){
			in(x, n);
		}
		else TRY(k+1, n, x);
	}
}
int main(){
	int n; scanf("%d", &n);
	int x[n];
	int k = 0;
	TRY(k, n, x);
}
