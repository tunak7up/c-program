#include <stdio.h>


int sum(int n){
	if(n <= 1) return 1;
	int s = sum(n-1);
	return n+s;
}

int fact(int n){ //tinh n!
	if(n <= 1) return 1;
	int f = fact(n-1);
	return n*f;
}
int c(int n, int k){ //tinh n! chia k!
	if(k == 0 || k == n) return 1;
	else return c(n-1, k-1)+c(n-1, k);
}

int main(){
	printf("%d ", sum(5));
	printf("%d", fact(5));
	printf("%d", c(5, 3));
}
