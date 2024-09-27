#include <stdio.h>

long long tong(int n){
	if(n == 1){
		return 1; 
	}
	return n + tong(n-1);
}
int f(int n){
	if(n <= 1){
		return 1; 
	}
	return f(n-1) + f(n-2);
}

int main(){
	printf("%lld", tong(3));
	for(int i = 0; i < 10 ; i++){
		printf("%d ", f(i));
	}
}
