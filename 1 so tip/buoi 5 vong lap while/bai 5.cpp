#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	float sum = 0;
	for(int i = 2; i <= (2*n); i += 2){
		sum += (1/(float)i);
	}
	printf("%.2f", sum);
	return 0;
}
