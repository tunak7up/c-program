#include <stdio.h>
#include <math.h>
//phuong phap: sang so nguyen to tu 1 den can 10 mu 9, xet chia het
int m[100001];
void sang(){
	for(int i = 0; i <= 100000l; i++){
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
int loc(int n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cnt++;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1) cnt++;
	return cnt;
}
int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		int l = loc(n);
		printf("%d", l);
	}
	
}
