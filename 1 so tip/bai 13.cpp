#include <stdio.h>
#include <math.h>

int m[100001];
void sang() {
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
int main() {
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		printf("1 ");
		for(int i = 2; i <= n; i++){
			if(i % 2 == 0){
				printf("2 ");
				continue;
			}
			for(int j = 2; j <= i; j++){
				if(m[j] && i % j == 0){
				printf("%d ", j);
				break;
				}
			}
		}
		printf("\n");
	}
}
