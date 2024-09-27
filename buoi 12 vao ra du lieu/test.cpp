#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
	FILE *fptr;
	fptr = fopen("bai1.out", "r");
	int n = 0;
	int a[100];

	while(feof(fptr) == 0){
		fscanf(fptr, "%d", &a[n]);
		n++;
	}
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	fclose(fptr);
}
