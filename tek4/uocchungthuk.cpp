#include <stdio.h>
#include <math.h>

int ucln(int x, int y){
	while(x != y){
		if(x > y) x -= y;
		else y -= x;
	}
	return x;
}

int main(){
	int x, y, k;
	scanf("%d%d%d", &x, &y, &k);
	int t = 0;
	for(int i = 1; i <= ucln(x, y); i++){
		if(x % i == 0 && y % i == 0){
			t++;
			if(t == k){
				printf("%d", i);
				break;
			}
		}
	}
	if(k > t){
		printf("-1");
	}
}
