#include <stdio.h>
#include <math.h>
int loc(int n){
	int res;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int cnt = 0;
			while(n % i == 0){
				cnt++;
				n /= i;
			}
			if(cnt >= 2) return 0;
			if(cnt == 1) res++;
		}
	}
	if(n > 1) res++;
	return res == 3;
}
int main() {
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", loc(n));
	}
}
