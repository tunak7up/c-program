#include <stdio.h>
#include <math.h>

void nhap(int a[], int n){
	printf("nhap cac phan tu cua mang: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

int main() {
	int n, a[1000];
	scanf("%d", &n);
	nhap(a, n);
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max) max = a[i];
	} 
	printf("%d", max);
	return 0;
} 
