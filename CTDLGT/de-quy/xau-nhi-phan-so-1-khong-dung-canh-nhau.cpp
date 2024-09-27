#include <stdio.h>

int check(int v, int k, int x[]){
	if(k == 0) return 1;
	if((v + x[k-1]) <= 1) return 1;
	else return 0;
}
void in(int x[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", x[i]);
	}
	printf("\n");
}

void TRY(int k, int x[], int n){
	for(int v = 0; v <= 1; v++){
		if(check(v, k, x) == 1){
			x[k] = v;
		if(k == n-1){
			in(x, n);
		}
		else TRY(k+1, x, n);
	}
	}
}
int main(){
	int n; scanf("%d", &n);
	int x[n];
	TRY(0, x, n);
}
