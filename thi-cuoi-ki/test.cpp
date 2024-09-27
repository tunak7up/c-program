#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b, int c){
	int max = a; 
	int max1 = -1e9-1;
	int max2 = -1e9-1;
	if(a <= b){
		max1 = b; 
		max = b; 
	}
	if(a <= c){
		max2 = c;
		max = c;  
	}
	if(max1 < max2){
		return max2; 
	}
	else if(max1 > max2){
		return max1;
	}
	else return max; 
}


int main(){
	printf("%d", max(0,0,1));
}
