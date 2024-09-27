#include <stdio.h>
#include <math.h>

void pt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
		int mui = 0;
		while(n % i == 0){
			mui++;
			n /= i;
		}
		printf("%d(%d) ",i,mui);
		}
	}
	if(n != 1) printf("%d(1)",n);
}
int main(){
	int n; scanf("%d",&n);
	pt(n);
	return 0;
}
