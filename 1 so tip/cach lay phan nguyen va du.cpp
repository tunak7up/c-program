#include <stdio.h>

int nguyen(float n){
	int nguyen = (int)n;
	return nguyen; 
}

int main() {
	float n; scanf("%f", &n);
	printf("%d", nguyen(n));
	return 0;
}
