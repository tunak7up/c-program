#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	long long sum = 0;
	while(n--){
		long long m; scanf("%lld", &m);
		sum += m;
	}
	printf("%lld", sum);
}
