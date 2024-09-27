#include <stdio.h>
#include <math.h>

int main() {
	long long n; scanf("%lld", &n);
	while(n < 0 || n > pow(10, 18)){
		printf("nhap lai \n");
		scanf("%lld", &n);
	}
	int chan = 0;
	int le = 0;
	if(n == 0){
		printf("0");
	}
	else{

	while(n > 0 && n <= pow(10, 18)){
		int cs = n % 10;
		if(cs % 2 == 0){
			chan += cs;
		}
		else{
			le += cs;
		}
		n /= 10;
	}
	printf("%d %d", chan, le);
	}
	return 0;
}
