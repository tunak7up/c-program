#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int min1 = 1e9+1;
	int min2 = 1e9+1;
	for(int i = 0; i < n; i++){
		if(a[i] < min1){
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i] < min2){
			min2 = a[i];
		}
	}
	printf("%d %d", min1, min2);
}
