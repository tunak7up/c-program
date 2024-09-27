#include <stdio.h>
#include <math.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+1], b[m+1];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int i = 0;
	int j = 0;
	a[n] = 1000001;
	b[m] = 1000001;
	while(i < n || j < m){
		if(a[i] >= b[j]){
				printf("%d ", b[j]);
				j++;
			}
		if(a[i] < b[j]){
				printf("%d ", a[i]);
				i++;
			
		
	}
	}
			
} 
