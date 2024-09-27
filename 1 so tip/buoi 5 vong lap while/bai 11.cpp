#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	while(x < 0 || y < 0){
		printf("vui long nhap lai \n");
		scanf("%d%d", &x, &y);
	}
	if(x >= 0 && y >= 0){
		long long sum = pow(x, y);
		printf("%lld", sum);
	}
	return 0;
} 
