#include <stdio.h>
#include <math.h>

int m[100001];
void sang(){
	for(int i = 0; i <= 100000; i++){
		m[i] = i;
	}
	for(int i = 2; i <= sqrt(100000); i++){
		if(m[i] == i){
			for(int j = i*i; j <= 100000; j+=i){
				if(m[j] == j){
					m[j] = i;	
				}
			}
		}
	}
}
int main(){
	int t; scanf("%d", &t);
	sang();
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			printf("%d", m[i]);
		}
		printf("\n");
	}
}
