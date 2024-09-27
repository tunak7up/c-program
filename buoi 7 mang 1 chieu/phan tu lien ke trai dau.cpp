#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			if(a[i] * a[i+1] < 0) printf("%d ", a[i]);
		}
		else if(i == n - 1){
			if(a[i] * a[i-1] < 0) printf("%d ", a[i]);
		}
		else if(a[i] * a[i-1] < 0 || a[i] * a[i+1] < 0){
			printf("%d ", a[i]);
		}
		
	}
	return 0;
}
