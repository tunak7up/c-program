#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void doicho(int *a, int *b){
	int tmp = *a; 
	*a = *b; 
	*b = tmp; 
}

int main(){
	int a = 3; 
	int b = 4;
	doicho(&a, &b); 
	printf("%d %d", a, b); 
}
