#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d", &t);
	int sotest = 1;
	while(t){
		printf("Test %d:\n", sotest);
		sotest++;
		int n; scanf("%d ", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int cnt = 1;
		int max = 1;
		for(int i = 0; i < n-1; i++){
			if(a[i] < a[i+1]){
				cnt++;
				if(cnt > max){
					max = cnt;
				}
			}
			else{
				cnt = 1;
			}
		}
		
		
		printf("%d\n", max);
		if(max == 1){
			for(int i = 0; i < n; i++){
				printf("%d\n", a[i]);
			}
		}
		else{
		
		int res = 1;
		int fin = 0;
		for(int i = 0; i < n-1; i++){
			if(a[i] < a[i+1]){
				res++;
			}
			else res = 1;
			if(res == max){
				fin = i+1;
				
				for(int i = fin - max+1; i <= fin; i++){
					printf("%d ", a[i]);
				}
				printf("\n");
			}
		} 
		}
		t--;
	}
	
}
