#include <stdio.h>

int main(){
	int max, a, b;
	scanf("%d%d", &a, &b);
	max = (a > b)? a : b;
	printf("%d", max);
}  
