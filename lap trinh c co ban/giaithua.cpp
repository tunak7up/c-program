#include <stdio.h>



int main(){
	int n; scanf("%d", &n);
	long long gt = 1;
	for(int i = 2; i <= n; i++){
		gt *= i;
	}
	printf("%lld", gt);
}
