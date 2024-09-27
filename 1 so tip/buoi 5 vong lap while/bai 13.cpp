#include <stdio.h>
#include <math.h>

int main() {
	long long n; scanf("%lld", &n);
	while(n < 0 || n > pow(10, 18)){
		printf("nhap lai \n");
		scanf("%lld", &n);
	}
	int sum = 0;
	if(n == 0){
		printf("0");
	}
	else{
		while(0 < n && n < pow(10, 18)){
			sum += n % 10;
			n /= 10;
		}
		printf("%d", sum);
	}
	return 0;
}
