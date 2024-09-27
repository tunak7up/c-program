#include <stdio.h>

void chuyen(int n){
	if(n == 0){
		return;
	}
	else{
		int r = n%2;
		chuyen(n/2);
		printf("%d", r);
	}
}

int main(){
	int n; scanf("%d", &n);
	chuyen(n);
} 
