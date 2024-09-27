#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if((1 <= n) && (n <= pow(10,6))){
		if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
	else{
		printf("INVALID");
	}
	return 0;
}
