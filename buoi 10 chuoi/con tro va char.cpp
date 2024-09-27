#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int *ptr = (int*)malloc(1000000 * sizeof(int)); //cap phat 4m by 
	int n = 5; 
	for(int i = 0; i < n; i++){
		scanf("%d", &ptr[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}
	free(ptr);
}
