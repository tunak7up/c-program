#include <stdio.h>
#include <math.h>

int m[1000001];
void sang(){
	for(int i = 0; i <= 1000000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(m[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int main(){
	int t; scanf("%d", &t); 
	sang();
	while(t--){
		long long a, b; scanf("%lld%lld", &a, &b);
		int cnt = 0;
		int can = sqrt(a);
		if(can * can < a){
			can++;
		}
		for(int i = can; i <= sqrt(b); i++){
			if(m[i]){
				
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}
