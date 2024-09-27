#include <stdio.h>
#include <math.h>

int main() {
	int x;
	scanf("%d", &x);
	if(0 < x && x <= 5){
		printf("1");
	}
	else if(x > 5){
		int thuong = x / 5;
		int du = x % 5;
		if(du == 0){
			printf("%d", thuong);
		}
		else{
			thuong += 1;
			printf("%d", thuong);
		}
	}
	else printf("INVALID");
	return 0;
}
