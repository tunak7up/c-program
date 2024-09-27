#include <stdio.h>
#include <math.h>

int scs(int n){
	int scs = 0;
	while(n){
		scs++;
		n /= 10;
	}
	return scs;
}
int check(int n){
	int s = scs(n);
	int tmp1 = n;
	int tmp2 = n;
	for(int i = 1; i <= s/2; i++){
		int a = tmp1 % 10;
		int b = tmp2 / pow(10, s-i);
		if(a != b) return 0;
		tmp1 /= 10;
		tmp2 = tmp2 - b*pow(10, s-i);
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
	
	int n; scanf("%d", &n);
	if(check(n)) printf("YES\n");
	else printf("NO\n");
	}
}
