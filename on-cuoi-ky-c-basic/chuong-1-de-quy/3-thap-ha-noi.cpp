#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int cnt = 0;

void move(int n, char a, char b, char c){
	if(n == 1){
		cnt++; 
		printf("Buoc %d: chuyen 1 dia tu cot %c sang cot %c\n", cnt, a, c);
	}
	else{
		move(n-1, a, c, b);
		move(1, a, b, c);
		move(n-1, b, a, c);
	}
}

int main(){
	printf("%d\n", cnt);
	int n; scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	printf("%d",cnt); 
}
