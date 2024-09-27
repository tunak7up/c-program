#include <stdio.h>
#include <math.h>

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

void sang(int l, int r){
	int a[r-l+1];
	for(int i = 0; i <= r-l; i++){
		a[i] = 1;
	} //tao 1 mang gom r-l+1 so 1
	for(int i = 2; i <= sqrt(r); i++){
		for(int j = max(i*i, (l+i-1)/i*i); j <= r; j+=i){
			a[j-l] = 0;
		}
	}
	for(int i = max(l, 2); i <= r; i++){
		if(a[i-l]) printf("%d ", i);
	}
}

int main() {
	int r, l;
	scanf("%d%d", &l, &r);
	sang(l, r);
}
