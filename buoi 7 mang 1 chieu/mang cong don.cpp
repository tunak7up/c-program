#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int prefix[n] = {0};
	for(int i = 0; i < n; i++){
		if(i == 0) prefix[i] = a[i];
		else prefix[i] = a[i] + prefix[i-1];
	}
	
	int t; scanf("%d", &t);
	while(t--){
		long long sum;
		int l, r;
		scanf("%d%d", &l, &r); l--; r--;
		if(l == 0) sum = prefix[r];
		else sum = prefix[r] - prefix[l-1];
		printf("%lld\n", sum);
	}
}
