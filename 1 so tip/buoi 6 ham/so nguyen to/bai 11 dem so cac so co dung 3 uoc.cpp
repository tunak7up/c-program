#include <stdio.h>
#include <math.h>

int m[1000001];
void sang() {
	for(int i = 0; i <= 1000000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(m[i]){
			for(int j = i*i; j<=1000000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int cnt = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(m[i] == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
}
