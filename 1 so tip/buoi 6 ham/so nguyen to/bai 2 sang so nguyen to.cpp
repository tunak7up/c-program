#include <stdio.h>
#include <math.h>

int check(long long n){
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int main(){
	long long n; scanf("%lld", &n);
	if(check(n)){
		printf("TRUE");
	}
	else printf("FALSE");
}
