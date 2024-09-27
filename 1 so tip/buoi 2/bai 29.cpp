#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int nam = n / 365;
	int du1 = n % 365;
	int tuan = du1 / 7;
	int ngay = du1 % 7;
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}
