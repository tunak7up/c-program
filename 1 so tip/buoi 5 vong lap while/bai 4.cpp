#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	float sum = 0;
	for(float i = 1; i <= n; i++){
		sum += (1/i);
	}
	printf("%.3f", sum);
	return 0;
}
