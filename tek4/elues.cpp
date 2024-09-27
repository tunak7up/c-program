#include <stdio.h>
#include <math.h>



int a[32768];

void sang(){
	for(int i = 0; i < 32768; i++){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i <= sqrt(32768); i++){
		if(a[i]){
			for(int j = i*i; j < 32768; j += i){
				a[j] = 0;
			}
		}
	}
}

int chuyen(int n){
	int tong = 0;
	int m = n;
	for(int i = 2; i <= m/2; i++){
		while(n % i == 0){
			tong += i;
			n = n / i;
		}
	}
	return tong;
} 

int main(){
	int n; scanf("%d", &n);
	sang();
	int m = chuyen(n);
	while(a[m] == 0){
		m = chuyen(m);
	}
	printf("%d", m);
}
