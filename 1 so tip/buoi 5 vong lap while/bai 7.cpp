#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 2; i <= 2*n; i += 2){
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
