#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += 2*i-1;
	}
	printf("%d", sum);
	return 0;
}
