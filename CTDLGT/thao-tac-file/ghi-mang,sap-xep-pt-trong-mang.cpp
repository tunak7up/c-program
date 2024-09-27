#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int*)a; 
	int *y = (int*)b; 
	if(*x > *y){
		return 1;
	}
	else return -1; 
}

int main(){
	FILE *fp, *fp2; 
	int n; scanf("%d", &n); 
	int a[n]; 
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]); 
	}
	
	fp = fopen("data.txt", "w"); 
	for(int i = 0; i < n-1; i++){
		fprintf(fp, "%d ", a[i]);
	}
	fprintf(fp, "%d", a[n-1]);
	fclose(fp);
	fp2 = fopen("data.txt", "r");
	int b[n];
	for(int i = 0; i < n; i++){
		fscanf(fp, "%d", &b[i]);
	}
	qsort(b, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++){
		printf("%d ", b[i]);
	}
	fclose(fp);
}
