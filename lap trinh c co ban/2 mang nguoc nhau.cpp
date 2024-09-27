#include <stdio.h>


int check(int a[], int b[], int n){
	for(int i = 0; i < n/2; i++){
		if(a[i] != b[n-i-1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	printf("%d", check(a, b, n));
}
