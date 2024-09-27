#include <stdio.h>
#include <math.h>

int dx(int a[], int n){
	int l = 0; int r = n-1;
	while(l < r){
		if(a[l] != a[r]) return 0;
		else{
			l++; r--;
		}
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	if(dx(a,n)){
		printf("YES");
	}
	else printf("NO");
} 
