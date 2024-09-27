#include <stdio.h>
#include <math.h>

int check(int a[], int i){
	for(int j = 0; j < i; j++){
		if(a[j] >= a[i]) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(i == 0) printf("%d ", a[i]);
		else if(check(a, i)) printf("%d ", a[i]);
	}
}
