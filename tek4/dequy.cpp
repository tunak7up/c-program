#include <stdio.h>
#include <math.h>

int tohop(int k, int n){
	if(k == n){
		return 1;
	}
	if(k == 0){
		return 1;
	}
	int tong = tohop(k-1, n-1) + tohop(k, n-1);
	return tong;
}

int main(){
	int k, n; scanf("%d%d", &k, &n);
	printf("%d", tohop(k, n));
}
