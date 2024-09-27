#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void swap(int *a, int *b){
	int tmp = *a; 
	*a = *b; 
	*b = tmp; 
}
void sapxep(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1-i; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n); 
	int a[n]; 
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]); 
	}
	sapxep(a, n); 
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]); 
	}
}
