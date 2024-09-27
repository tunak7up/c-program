#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	long long tong = 1;
	while(n < 0){
		printf("vui long nhap lai\n");
		scanf("%d", &n);
	}
	if(n >= 0){
		for(int i = 1; i <= n; i++){
		tong *= i;
	}
	printf("%lld", tong);
	}
	return 0;
} 
