#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max1 = -1e9-1;
	int max2 = -1e9-1;
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] > max2) max2 = a[i];
	}
	
	if(max1 == max2){
		int max3 = -1e9-1;
		for(int i = 0; i < n; i++){
			if(a[i] > max3 && a[i] < max2){
				max3 = a[i];
			}
		}
		if(max3 == -1e9-1) printf("%d -1", max1);
		else printf("%d %d", max1, max3);
	}
	
	else printf("%d %d", max1, max2);
}
