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
	int maxh = 0; int hb;

	for(int i = 0; i < n; i++){
		int tongh = 0;
		for(int j = 0; j < m; j++){
			tongh += a[i][j];
		}
		if(tongh > maxh){
			maxh = tongh;
			hb = i;
		}
	}
	int maxc = 0; int cb;
	for(int j = 0; j < m; j++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(i != hb){
				sum += a[i][j];
			}
		}
		if(sum > maxc){
			maxc = sum;
			cb = j;
		}
	}
	for(int i = 0; i < n; i++){
		if(i != hb){
			for(int j = 0; j < m; j++){
				if(j != cb){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
