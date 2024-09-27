#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int du = n % 4;
	if(n == 15){
		printf("6 9");
	}
	else if(du == 0){
		int x = n / 2;
		int y = n / 2;
		printf("%d %d", x, y);
	}
	else if(du == 1){
		int y = n - 9;
		printf("9 %d", y);
	}
	else if(du == 2){
		int x = (n / 2) - 1;
		int y = (n / 2) + 1;
		printf("%d %d", x, y);
	}
	else if(du == 3){
		int y = n - 15;
		printf("15 %d", y);
	}	
	return 0;
}
