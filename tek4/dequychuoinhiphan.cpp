#include <stdio.h>


void ps(int n, char x[]){
	for(int k = 0; k < n; k++){
		printf("%d", x[k]);
	}
	printf("\n");
}
int try(int k, char x[]){
	for(int v = 0; v <= 1; v++){
		x[k] = v;
		if(k == n-1) ps(k, x);
		else try(k+1);
	}
}

int main(){
	int n; scand("%d", &n)
	try(0);
}
