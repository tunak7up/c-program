#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void chuyen(int n, char t1, char t3){
	printf("chuyen thap %d tu %c sang %c\n", n, t1, t3);
}

void thaphn(int n, char t1, char t2, char t3){
	if(n == 1){
		chuyen(n, t1, t3);
	}
	else{
		thaphn(n-1, t1, t3, t2);
		chuyen(n, t1, t3);
		thaphn(n-1, t2, t1, t3);
	}
}

int main(){
	int n; scanf("%d", &n);
	char a = 'A';
	char b = 'B';
	char c = 'C';
	thaphn(n, a, b, c);
}
