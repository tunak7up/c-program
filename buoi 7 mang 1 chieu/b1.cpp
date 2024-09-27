#include <stdio.h>
#include <math.h>

int a[1000000];
void nhap(int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 ) return 0;
	}
	return n> 1;
}

int main(){
	int n; scanf("%d", &n);
	nhap(n);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int nt = nt(a[i]);
		if(nt == 1) nt++;
	}
	printf("%d", nt);
}
