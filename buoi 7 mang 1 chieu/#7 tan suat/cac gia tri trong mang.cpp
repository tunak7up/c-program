#include <stdio.h>
#include <math.h>

int mark[1000001] = {0};

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(mark[a[i]] == 0){
			printf("%d ", a[i]);
			mark[a[i]] = 1;
		}
	}
}
