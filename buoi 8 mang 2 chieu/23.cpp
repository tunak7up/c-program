#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = 0; 
	int res;
	for(int i = 0; i < m; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(nt(a[j][i]) == 1){
				cnt++;
			}
		}
		if(cnt > max){
			max = cnt;
			res = i;
		}
	}
	printf("%d\n", res + 1);
	for(int i = 0; i < n; i++){
		if(nt(a[i][res]) == 1) printf("%d ", a[i][res]);	
	}
}
