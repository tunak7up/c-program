#include <stdio.h>
#include <math.h>

int cnt[1000001] = {0};


int main(){
	int m, n; scanf("%d%d", &m, &n);
	int a[m], b[n];
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	for(int i = 0; i < m; i++){
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		cnt[b[i]]++;
	}
	for(int i = 0; i < 100; i++){
		if(cnt[i] == 2) printf("%d ", i);
	}
	printf("\n");
	for(int i = 0; i < 100; i++){
		if(cnt[i] > 0) printf("%d ", i);
	}
}
