#include <stdio.h>

int cmp(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
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
	printf("%d", cmp(a, b, n));
}
