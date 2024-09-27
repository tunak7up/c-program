#include <stdio.h>

void in(int x[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", x[i]);
	}
	printf("\n");
}

void TRY(int k, int x[], int n){
	for(int v = 0; v <= 1; v++){
		x[k] = v;
	if(k == n-1){
		in(x, n);
	}
	else TRY(k+1, x, n);
	}
}

int main(){
	int n; scanf("%d", &n);
	int x[n];
	TRY(0, x, n);
}
