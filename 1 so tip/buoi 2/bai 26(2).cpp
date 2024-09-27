#include <stdio.h>


int main() {
	int a, b, c;
	int m;
	int n;
	scanf("%d%d%d", &a, &b, &c);
	m = a;
	if(m < b){
		m = b;
	}
	if(m < c){
		m = c;
	}
	
	n = b;
	if(n > a){
		n = a;
	}
	if(n > c){
		n = c;
	}
	printf("%d %d", m, n);
}
