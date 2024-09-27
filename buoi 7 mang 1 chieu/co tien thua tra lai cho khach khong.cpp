#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	int ok = 1;
	int to25 = 0;
	int to50 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 25) to25++;
		if(a[i] == 50){
			to25--;
			if(to25 < 0){
				printf("NO");
				ok = 0;
				break;
			}
			else to50++;
		}
		if(a[i] == 100){
			
			if(to25 * 25 + to50 * 50 < 75){
				printf("NO");
				ok = 0;
				break;
			}
			if(to50 != 0){
				to50--;
				to25--;
			}
			else to25 -= 3;
		}
	}
	if(ok == 1) printf("YES");
}
