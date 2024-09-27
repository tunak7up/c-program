#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld", &n);
	if((n >= 1) && (n <= pow(10, 9))){
		if((n % 2) == 0){
			long long tong = n / 2;
			printf("%lld", tong);
		}
		else if(n % 2 == 1){
			long long tong = (-n - 1) / 2;
			printf("%lld", tong);
		}
	} 
	else{
		printf("du lieu ko hop le");
	}
}
