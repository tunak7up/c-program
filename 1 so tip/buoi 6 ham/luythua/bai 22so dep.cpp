#include <stdio.h>
#include <math.h>

int sd(int n){
	if(n == 1) return 0;
	for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
			
			int cnt = 0;
			while(n % i == 0){
				cnt++;
				n /= i;
			}
			if(cnt < 2) return 0;
	}
			
	}
	if(n > 1) return 0;
	else return 1;
}
int main(){
	int a, b; scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++){
		if(sd(i)) printf("%d ", i);
	}
}
