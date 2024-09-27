#include <stdio.h>
#include <math.h>

int main() {
	long long t, n;
	scanf("%lld%lld", &t, &n);
	if( (1 <= t) && (t <= 12) && (1 <= n) && (n <= pow(10, 6)) ){
		if(n % 4 != 0){
			if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
				printf("31");
			}
			else if(t == 4 || t == 6 || t == 9 || t == 11){
				printf("30");
			}
			else if(t == 2){
				printf("28");
			}
		}
		else{
			if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
				printf("31");
			}
			else if(t == 4 || t == 6 || t == 9 || t == 11){
				printf("30");
			}
			else if(t == 2){
				printf("29");
			}
			
		}
	}
	else{
		printf("INVALID");
	}
	return 0;
}
