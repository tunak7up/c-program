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
	for(int j = 0; j < n; j++){
		int tong = 0;
		for(int i = 0; i < m; i++){
			tong += a[i][j];
		}
		printf("%d\n", tong);
	}
}
