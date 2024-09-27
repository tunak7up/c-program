#include <stdio.h>
#include <math.h>

int mark[1000001] = {0};

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		mark[a[i]]++;
	}
	int dem = 0, res;
	for(int i = 0; i < n; i++){
		if(mark[a[i]] > dem){
		dem = mark[a[i]];
		res = a[i];
		}
		if(mark[a[i]] == dem){
			if(res > a[i]) res = a[i];
		}
		
	}
	printf("%d %d", res, dem);
}
