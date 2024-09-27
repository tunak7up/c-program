#include <stdio.h>
#include <math.h>

int main(){
	int n, k; scanf("%d%d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max = -1e9-1;
	int idx = 0;
	
	for(int i = 0; i < n - k + 1; i++){
		int tong = 0;
		for(int j = 0; j < k; j++){
			tong += a[i+j];
		}
		if(tong >= max){
			max = tong;
			idx = i;
		} 
	}
	printf("%d ", max);
	for(int i = idx; i < idx + k; i++){
		printf("%d ", a[i]);
	}
}
