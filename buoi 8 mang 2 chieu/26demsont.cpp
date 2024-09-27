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
	int cnt[10001];
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){  
			scanf("%d", &a[i][j]);
		}
	}
	int snt = 0;
	if((n % 2) == 1){
		for(int i = 0; i < n; i++){
			if(i != (n-1)/2){
				if(nt(a[i][i])){
					cnt[a[i][i]]++;
					if(cnt[a[i][i]] == 1){
						snt++;
					}
				}
				if(nt(a[i][n-i-1])){
					cnt[a[i][n-i-1]]++;
					if(cnt[a[i][n-i-1]] == 1){
						snt++;
					}
				}
			}
			else if(nt(a[i][i])){
				cnt[a[i][i]]++;
				if(cnt[a[i][i]] == 1){
					snt++;
				}
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(nt(a[i][i])){
					cnt[a[i][i]]++;
					if(cnt[a[i][i]] == 1){
						snt++;
					}
				}
				if(nt(a[i][n-i-1])){
					cnt[a[i][n-i-1]]++;
					if(cnt[a[i][n-i-1]] == 1){
						snt++;
					}
				}
		}
	}
	printf("%d", snt);
} 
