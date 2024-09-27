#include <stdio.h>
#include <math.h>

int m[1000001];
void sang(){
	for(int i = 0; i <= 1000000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(m[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int unt(int n){
	for(int i = n; i >= 2; i--){
		if(m[i] == 1 && n % i == 0){
			return i;
		}
	}
	if(n == 1) return 1;
}
int unt2(int n){
	int res;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			res = i; 
			n /= i;
		}
	}
	if(n > 1) res = n;
	return res;
}
int main(){
	sang();
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", unt2(n));
	}
}
