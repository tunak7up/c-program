#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(i == 0) printf("%d ", a[0]);
		else if(a[i] > max){
			max = a[i];
			printf("%d ", a[i]);
		}
	}
	return 0;
}
