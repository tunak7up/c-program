#include <stdio.h>
#include <math.h>

int a[pow(10, 14)];

void sang(){
	for(int i = 0; i < pow(10, 14); i++){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i < pow(10, 7); i++){
		if(a[i]){
			for(int j = i*i; j < pow(10, 7)); j += i{
				a[j] = 0;
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	sang();
	if(a[n]){
		printf("YES");
	}
	else printf("NO");
}
