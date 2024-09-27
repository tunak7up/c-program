#include <stdio.h>
#include <math.h>

int main(){
	int n, k; scanf("%d%d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int sum = 0; int res = 0;
	int idx = 0;
	for(int i = 0; i < k; i++){
		sum += a[i];
	}
	res = sum;
	for(int i = 1; i <= n-k; i++){
		sum = sum - a[i-1] + a[i+k-1];
		if(sum >= res){
			res = sum;
			idx = i;
		} 
	}
	printf("%d ", res);
	for(int i = idx; i <= idx + k - 1; i++){
		printf("%d ", a[i]);
	}
}
