#include <stdio.h>
#include <math.h>

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x, y;
	scanf("%d%d", &x, &y);
	int tmp[m] = {0};
	for(int j = 0; j < m; j++){
		tmp[j] = a[x-1][j];
		a[x-1][j] = a[y-1][j];
		a[y-1][j] = tmp[j];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
