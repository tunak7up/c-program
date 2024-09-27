#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void in(int x[], int n){
	for(int i = 1; i < n; i++){
		printf("%d", x[i]);
	}
	printf(" ");
}
void thu(int k, int n, int x[]){
	for(int v = 0; v <= 1; v++){
		if(x[k-1] + v < 2){
			x[k] = v;
		if(k == n-1){
			in(x, n);
		}
		else thu(k+1, n, x);
		}
	}
}
int main(){
	int n; scanf("%d", &n);
	n++;
	int x[n];
	x[0] = 0;
	int k = 1;
	thu(k, n, x);
}
