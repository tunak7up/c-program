#include <stdio.h>
#include <math.h>

int m[10000001];
void sang(){
	for(int i = 0; i <= 10000000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(m[i]){
			for(int j = i*i; j <= 10000000; j+=i){
				m[j] = 0;
			}
		}
	}
}
int main() {
	int n; scanf("%d", &n);
	sang();
	for(int i = 1; i<= n; i++){
		for(int i = 2; i <= 10000000; i++){
			if(m[i]){
				printf("%d\n", i);
				n--;
			}
			if(n == 0) break;
		}
	}
}
