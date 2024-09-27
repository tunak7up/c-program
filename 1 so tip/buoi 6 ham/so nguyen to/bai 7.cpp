#include <stdio.h>
#include <math.h>

int m[10001];
int snt(){
	for(int i = 0; i <= 10000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(10000); i++){
		if(m[i]){
			for(int j = i*i; j<= 10000; j+=i){
				m[j] = 0;
			}
		}
	}
}

int main() {
	int t; scanf("%d", &t);
	snt();
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 2; i <= n/2; i++){
			if(m[i] && m[n-i]) printf("%d %d\n", i, n-i);
		}
	}
}
