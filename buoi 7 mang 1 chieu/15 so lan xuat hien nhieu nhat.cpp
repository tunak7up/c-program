#include <stdio.h>
#include <math.h>



int main(){
	int t; scanf("%d", &t);
	while(t--){
		int cnt[30001] = {0};
		int n; scanf("%d", &n);
		int a[n];
		int max = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
			if(cnt[a[i]] > max) max = cnt[a[i]];
		}
		for(int i = 0; i < 30001; i++){
			if(cnt[i] == max) printf("%d ", i);
		}
		printf("\n");
	}
}
