#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		long long key = (i*i*(i*i-1)/2)-(i-1)*(i-2)*4;
		printf("%lld\n", key);
	}
	return 0;
}
