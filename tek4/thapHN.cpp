#include <stdio.h>

void chuyen(int n, char ra, char vao){
	printf("chuyen dia %d tu cot %c sang cot %c\n", n, ra, vao);
}
void thapHN(int n, char t1, char t2, char t3){
	if(n == 1){
		chuyen(1, t1, t3);
	}
	else{
	thapHN(n-1, t1, t3, t2);
	chuyen(n, t1, t3);
	thapHN(n-1, t2, t1, t3);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	char a = 'A';
	char b = 'B';
	char c = 'C';
	thapHN(n, a, b, c);
}
