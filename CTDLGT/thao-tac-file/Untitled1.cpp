#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *filetro; 
	filetro = fopen("Vidu.txt", "r"); 
	if(filetro == NULL){
		printf("ERROR\n"); 
		exit(1);
	} 
	int n; 
	fscanf(filetro, "%d", &n);
	printf("%d", n);
	fclose(filetro); 
}
