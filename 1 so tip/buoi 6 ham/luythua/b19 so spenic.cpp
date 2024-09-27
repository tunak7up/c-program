#include <stdio.h>
#include <math.h>

int m[10001];
void sang(){
	for(int i = 0; i <= 10000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(10000); i++){
		if(m[i]){
			for(int j = i*i; j <= 10000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int loc(int n){
	int cnt = 0;
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0 && m[i]){
			if(n % (i*i) == 0 || cnt > 3) return 0;
			cnt++;
		}
	}
	return cnt == 3;
}
int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", loc(n));
	}
}
