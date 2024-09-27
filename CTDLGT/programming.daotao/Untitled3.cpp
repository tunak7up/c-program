#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
long long a[1000][1000];

int min(int k, int i){
	if(k < i) return k;
	else return i;
}
long long c(int k, int n){
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= min(k, i); j++){
			if(j == 0 || j == i){
				a[j][i] = 1;
			}
			else a[j][i] = a[j-1][i-1] % 1000000007 + a[j][i-1] % 1000000007;
		}
	}
	return a[k][n] % 1000000007;
} 



int main(){
	int k, n; 
	scanf("%d%d", &k, &n);
	long long du1 = c(k, n);
//	long long du2 = c(k-1, n-1) % 1000000007;
	printf("%lld", (du1));
}
