#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if((-pow(10, 18) <= n) && (n <= pow(10, 18))){
		if((n % 3 == 0) && (n % 5 == 0)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	else{
		printf("du lieu ko hop le");
	}
	return 0;
}
