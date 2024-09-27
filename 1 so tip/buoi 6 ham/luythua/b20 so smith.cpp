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
int tong(int n){
	int sum = 0;
	while(n){
		sum += (n%10);
		n /= 10;
	}
	return sum;
}
int pt(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum += tong(i);
			n /= i;
		}
	}
	if(n > 1) sum+=tong(n);
	return sum;
}
int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		if(m[n] == 0 && tong(n) == pt(n)){
			printf("YES");
		}
		else printf("NO");
	}
}
