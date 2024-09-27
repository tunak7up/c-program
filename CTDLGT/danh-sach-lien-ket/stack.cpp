#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int n = 0; 
int st[10001];
void push(int x){
	st[n] = x; 
	n++;
}
void pop(){
	if(n >= 1){
		n--; 
	}
}
int top(){
	return st[n-1];
}
int size(){
	return n; 
}

int main(){
	while(1){
		printf("--------------\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. top\n");
		printf("4. size\n");
		printf("0. Break\n");
		printf("--------------\n");
		int lc; scanf("%d", &lc);
		if(lc == 1){
			printf("Nhap so muon them vao: ");
			int x; scanf("%d", &x); 
			push(x);
			printf("\n");
		}
		else if(lc == 2){
			pop();
		}
		else if(lc == 3){
			if(n == 0) printf("EMPTY\n");
			else printf("%d\n", top());
		}
		else if(lc == 4){
			printf("%d\n", size());
		}
		else break;
	}
} 
