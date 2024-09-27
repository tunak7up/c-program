#include <stdio.h>
#include <math.h>

int max(int a, int b){
	if(a > b) return a;
	else return b;
}
int min(int a, int b){
	if(a > b) return b;
	else return a;
}
int mini(int a[], int i){
	return min(a[i]-a[i-1], a[i+1]-a[i]);
}
int maxi(int a[],int i, int n){
	return max(a[i] - a[0], a[n-1] - a[i]);
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		if(i == 0){
			printf("%d %d\n", a[1] - a[0], a[n-1] - a[0]);
		}
		else if(i == n - 1){
			printf("%d %d\n", a[n-1] - a[n-2], a[n-1] - a[0]);
		}
		else printf("%d %d\n", mini(a, i), maxi(a, i, n));
	}
	return 0;
}
