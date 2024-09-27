#include <stdio.h>
#include <math.h>

int chan[2000001] = {0};
int le[2000001] = {0};


int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0) chan[a[i]]++;
		else le[a[i]]++;
	}
	for(int i = 0; i < 2000001; i++){
		if(chan[i] > 0) printf("%d ", i);
	}
	printf("\n");
	for(int i = 0; i < 2000001; i++){
		if(le[i] > 0) printf("%d ", i);
	}
} 
