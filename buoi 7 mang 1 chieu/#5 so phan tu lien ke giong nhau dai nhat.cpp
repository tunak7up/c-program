#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	int max = 0;
	for(int i = 0; i < n-1; i++){
		if(a[i] == a[i+1]){
			cnt++;
			if(cnt > max){
				max = cnt;
			}
		}
		else{
			cnt = 0;
		}
		
	}
	printf("%d", max+1);
}
