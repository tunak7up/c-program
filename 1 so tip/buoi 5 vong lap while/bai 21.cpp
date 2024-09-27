#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	int du = n % 7; 
	int sotuan = n / 7; 
	int max, min;
	if(du == 6){
		max = sotuan * 2 + 2;
		min = sotuan * 2 + 1;
		printf("%d %d", min, max);
	}
	if(3 <= du && du <= 5){
		max = sotuan * 2 + 2;
		min = sotuan * 2;
		printf("%d %d", min, max);
	}
	if(du <= 2){
	 	max = (sotuan * 2 + du);
	 	min = (sotuan * 2);
		printf("%d %d", min, max);
	}
	return 0;
}
