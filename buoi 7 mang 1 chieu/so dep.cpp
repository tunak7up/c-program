#include <stdio.h>
#include <math.h>

int check(int n){
	int c1 = 0;
	int c9 = 0;
	while(n){
		if(n % 10 == 1) c1 = 1;
		if(n % 10 == 9) c9 = 1;
		if(c1 && c9) return 1;
		n /= 10;
	}
	return 0;
}
int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int sosodep = 0;
	for(int i = 0; i < n; i++){
		if(check(a[i])){
		printf("%d ", a[i]);
		sosodep++;
		}
	}
	if(sosodep == 0) printf("-1");
}
