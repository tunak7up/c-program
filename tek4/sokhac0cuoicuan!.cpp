#include <stdio.h>
#include <math.h>



int main(){
	int n; scanf("%d", &n);
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
		while(res % 10 == 0){
			res /= 10;
		}
		res = res % 10;
		printf("%d: %d\n",i, res);
	}
	
}
