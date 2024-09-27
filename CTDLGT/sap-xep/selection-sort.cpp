#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void taoham(int a[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]); 
	}
}
void duyet(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]); 
	}
}
void swap(int *a, int *b){
	int tmp = *a; 
	*a = *b; 
	*b = tmp; 
}
void sapxep(int a[], int n){
	for(int i = 0; i < n-1; i++){
		int min = a[i]; 
		int m; 
		for(int j = i+1; j < n; j++){
			if(min >= a[j]){
				min = a[j];  
				m = j; 
			}
		}
		swap(&a[m], &a[i]);
	}
}

int main(){
	int n; scanf("%d", &n); 
	int a[n]; 
	taoham(a, n); 
	sapxep(a, n);
	duyet(a, n); 
}
