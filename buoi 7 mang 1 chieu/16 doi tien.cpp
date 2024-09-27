#include <stdio.h>
#include <math.h>

int main(){
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int cnt = 0;
		int i = 0;
		while(n > 0){
			if( (n / a[i]) > 0){
				cnt += (n/a[i]);
				n = n % a[i];
				
			}
			i++;
		}
		printf("%d\n", cnt);
	}
}
