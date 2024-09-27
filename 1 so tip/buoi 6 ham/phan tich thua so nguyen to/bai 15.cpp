#include <stdio.h>
#include <math.h>

int m[100001];
void sang(){
	for(int i = 0; i <= 100000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(100000); i++){
		if(m[i]){
			for(int j = i*i; j <= 100000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int unt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if((n % i == 0) && m[i]) return i;
		}
	}
}
int main() {
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 2; i <= sqrt(n); i++){
			if(m[i]){
				if(n % i == 0){
					int mui = 0;
					while(n % i == 0){
						mui++;
						n /= i;
					}
					printf("%d(%d) ", i, mui);
				}
			}
		}
		if(n != 1) printf("%d(1)", n);
		printf("\n");
	}
}
