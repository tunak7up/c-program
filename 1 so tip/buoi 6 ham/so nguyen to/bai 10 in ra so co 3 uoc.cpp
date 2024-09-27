#include <stdio.h>
#include <math.h>

int m[1001];
void sang() {
	for(int i = 0; i <= 1000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(1000); i++){
		if(m[i]){
			for(int j = i*i; j <= 1000; j += i){
				m[j] = 0;
			}
		}
	}
}
int main() {
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 2; i <= sqrt(n); i++){
			if(m[i] == 1){
				printf("%d ", i*i);
			}
		}
		printf("\n");
	}
}
