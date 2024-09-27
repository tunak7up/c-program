#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int dex = 1;
		for(int i = 0; i < n-1; i++){
			if(a[i] == a[i+1]){
				dex = -1;
				printf("%d", a[i]);
				break;
			}
		}
		if(dex == 1) printf("-1");
	}
}
