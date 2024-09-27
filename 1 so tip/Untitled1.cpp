#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp; 
	int a[100];
	fp = fopen("data.txt", "r"); 
	while(feof(fp) == 0){
		fscanf(fp, "%d", &a[i]);
	}
}
