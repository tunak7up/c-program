#include <stdio.h>
#include <math.h>

int main() {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if((1 <= b) && (b <= a) && a <= pow(10, 8)){
		long long du = a % b;
		if(du != 0){
			a -= du;
			printf("%lld", a);
		}
		else{
			printf("%lld", a);
		}
	}
	else{
		printf("du lieu ko hop le");
	}
	return 0;
}
