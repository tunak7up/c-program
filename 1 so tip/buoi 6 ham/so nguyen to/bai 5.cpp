#include <stdio.h>
#include <math.h>

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

void sang(int m[], int a, int b){
	
	for(int i = 0; i <= b-a; i++){
		m[i] = 1;
	}
	for(int i = 2; i <= sqrt(b); i++){
		for(int j = max(i*i, (a+i-1)/i*i); j<=b; j+=i){
			m[j-a] = 0;
		}
	}
	
}

int loc(int n){
	while(n){
		switch(n % 10){
			case 0: case 1: case 4: case 6: case 8: case 9:
			return 0; 
			default: 
			n /= 10;
		}
	}
	return 1; 
}
int main() {
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
	int m[b-a+1];
	int snt = 0;
	sang(m, a, b);
	for(int i = max(a, 2); i<= b; i++){
		if(loc(i) && m[i-a]) snt++;
	}
	printf("%d\n", snt);	
	}
	
	
}
