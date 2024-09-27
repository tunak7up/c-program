#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if((-pow(10, 18) <= n) && (n <= 10)){
		if(n % 2 == 0){
			printf("n la so chan");
		}
		else{
			printf("n la so le");
		}
	}
	else{
		printf("du lieu ko hop le");
	}
	return 0;
}
