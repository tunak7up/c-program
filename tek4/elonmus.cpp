#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int tong = 0;
	int can = (int)sqrt(n);
	for(int i = 2; i <= can; i++){
		while(n % i == 0){
			n /= i;
			tong += i;
		}
	}
	printf("%d", tong);
}
