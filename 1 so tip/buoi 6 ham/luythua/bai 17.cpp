#include <stdio.h>
#include <math.h>

int loc(int n, int p){
	int cnt = 0;
	for(int i = p; i <= n; i+=p){
		int tmp = i;
		while(tmp % p == 0){
			cnt++;
			tmp /= p;
		}
	}
	return cnt;
}

int loc2(int n, int p){
	int cnt = 0; 
	for(int i = p; i <= n; i*=p){
		cnt += (n/i);
	}
	return cnt;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; int p; scanf("%d%d", &n, &p);
		printf("%d\n", loc2(n, p));
	}
}
