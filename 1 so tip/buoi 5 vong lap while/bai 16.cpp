#include <stdio.h>
#include <math.h>

int main() {
	long long n; scanf("%lld", &n);
	int scs = 0;
	if(n == 0){
		printf("0");
	}
	else{
		while(n > 0 && n <= pow(10, 18)){
			int cs = n % 10;
			if(cs == 2 || cs == 3 || cs == 5 || cs == 7){
				scs++;
			}
			n /= 10;
		}
		printf("%d", scs);
	}
	return 0;
}
