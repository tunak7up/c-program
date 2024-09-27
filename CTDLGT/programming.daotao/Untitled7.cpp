#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

long long a[1000][1000];
long long c(int k, int n){
	if(a[k][n] != -1) return a[k][n];
	else{
	if(k == 0 || k == n){
		a[k][n] = 1;
		return 1; 
	}
	if(a[k-1][n-1] != -1 && a[k][n-1] != -1){
		a[k][n] = a[k-1][n-1] + a[k][n-1];
		return a[k][n];
	}
	return c(k-1, n-1) + c(k, n-1);
	}
}

int main(){
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < 1000; j++){
			a[i][j] = -1;
		}
	}
	int k, n; scanf("%d%d", &k, &n);
	printf("%lld", c(k, n));
}
