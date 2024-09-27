#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int max;
	max = a;
	if(max < b){
		max = b;
	}
	int min;
	min = b;
	if(min > a){
		min = a;
	}
	int hieu = max - min;
	int h1 = hieu / 2;
	printf("%d %d", min, h1);
	return 0;
}
