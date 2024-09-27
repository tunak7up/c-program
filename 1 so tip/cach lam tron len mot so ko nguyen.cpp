#include <stdio.h>
#include <math.h>
//input mot so n khong nguyen, de lam tron len ta lay phan nguyen cong 1
int main() {
	float n; scanf("%f", &n);
	int pnguyen = (int)n;
	int len = pnguyen + 1;
	printf("%d", len);
}
