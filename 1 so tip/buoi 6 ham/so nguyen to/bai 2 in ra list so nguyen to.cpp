#include <stdio.h>
#include <math.h>

int a[100001];
void sang() {
	for(int i = 0; i < 100001; i++){
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i = 2; i <= sqrt(100001); i++){
		if(a[i]){
			for(int j = i*i; j < 100001; j+=i){
				a[j] = 0;
			} 
		}
	}
}
int main() {
	int n; scanf("%d", &n);
	sang();
	for(int i = 2; i <= n; i++){
		if(a[i]){
			printf("%d ", i);
		}
	}
} 

