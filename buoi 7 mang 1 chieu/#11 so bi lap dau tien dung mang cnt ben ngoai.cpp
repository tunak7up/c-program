#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int cnt[1000001] = {0};

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int ok = 0;
		for(int i = 0; i < n; i++){
			if(cnt[a[i]] == 1){
				ok = 1;
				printf("%d\n", a[i]);
				break;
			}
			cnt[a[i]] = 1;
		}
		if(ok == 0){
		printf("-1\n");
		}
		printf("\n");
		memset(cnt, 0, sizeof(cnt));
	}
}
