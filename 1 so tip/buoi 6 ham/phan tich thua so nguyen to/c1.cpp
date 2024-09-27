#include <stdio.h>
#include <math.h>

int m[100001];
void sang(){
	for(int i = 1; i <= 100000; i++){
		m[i] = i;
	}
	for(int i = 2; i <= sqrt(100000); i++){
		if(m[i] = i){
			for(int j = i*i; j <= 100000; j+=i){
				if(m[j] = j){
					m[j] = i;   
				}
			}
		}
	}
}  
void loc(int n){
	while(n > 1){
		int i = m[n];
		int mui = 0;
		while(n % i == 0){
			mui++;
			n /= i;
		}
		printf("%d(%d)", i, mui);
	}
}
int main(){
	int t; scanf("%d", &t);
	sang();
	for(int i = 1; i <= t; i++){
		int n; scanf("%d", &n);
		loc(n);
	}
}
