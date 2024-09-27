#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld", &n);
	int scs = 0;
	while(n < 0 || n > pow(10, 18)){
		printf("nhap lai \n");
		scanf("%lld", &n);
	}
	
	if(n == 0){
		printf("1");
	}
	else{
		while(n > 0 && n <= pow(10, 18)){
		scs++;
		n /= 10;
	}
	printf("%d", scs);
	}
	return 0;
}
