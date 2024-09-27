#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	int t = n / 7;
	int du = n % 7;
	printf("%d %d", t, du);
	return 0; 
}
