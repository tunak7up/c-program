#include <stdio.h>
#include <math.h>

int dem5(int n){
	int cnt = 0;
	for(int i = 5; i <= n; i*=5){
		cnt += n/i;
	}
	return cnt;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", dem5(n));
	}
}
