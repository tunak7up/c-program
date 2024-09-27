#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void sapxep(int &a, int &b){
	int tmp = a; 
	a = b; 
	b = tmp; 
}

int main(){
	int a, b; scanf("%d%d", &a, &b); 
	sapxep(a, b); 
	printf("%d %d", a, b); 
}
