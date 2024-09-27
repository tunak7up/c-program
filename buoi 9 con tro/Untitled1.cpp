#include <stdio.h>
#include <math.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a[3];
	for(int i = 0; i < 3; i++){
		scanf("%d", a + i);
	} 
	for(int i = 0; i < 3; i++){
		printf("%d ", *(a + i));
	} 
}
