#include <stdio.h>
#include <math.h>

int main(){
	int m, n; scanf("%d%d", &m, &n);
	int a[m], b[n];
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	int giao[m+n] = {0}; int g = 0;
	int hop[m] = {0}; int h = 0;
	int i = 0;
	int j = 0;
	while(i < m && j < n){
		if(a[i] > b[j]){
			giao[g] = b[j];
			j++;
			g++;
		}
		if(a[i] < b[j]){
			giao[g] = a[i];
			i++;
			g++;
		}
		if(a[i] == b[j]){
			giao[g] = a[i];
			hop[h] = a[i];
			i++; j++; h++; g++;
		}
	}

	while(i < m){
		giao[g] = a[i];
		g++;
		i++;
	}
	while(j < n){
		giao[g] = b[j];
		g++;
		j++;
	}
	for(int i = 0; i < g; i++){
		printf("%d ", giao[i]);
	}
	printf("\n");
	for(int i = 0; i < h; i++){
		printf("%d ", hop[i]);
	}
}
