#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <ctype.h>

int a[100000], maxn = 100000;
int n = 0;
void push(int x){
	if(n == maxn) return;
	a[n] = x; 
	n++; 
} 
void pop(){
	if(n == 0) return;
	for(int i = 0; i < n-1; i++){
		a[i] = a[i+1];
	}
	n--; 
}
int front(){
	return a[0];
}
int size(){
	return n; 
}
void duyet(){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
bool empty(){
	return n == 0;
}
int main(){
	while(1){
		printf("-----------------\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. size\n");
		printf("4. front\n");
		printf("5. duyet\n");
		printf("6. empty\n");
		printf("0. break\n");
		printf("-----------------\n");
		int lc; scanf("%d", &lc); 
		if(lc == 1){
			int x; scanf("%d", &x);
			push(x);
		}
		else if(lc == 2){
			pop();
		}
		else if(lc == 3){
			printf("%d\n", size());
		}
		else if(lc == 4){
			printf("%d", front());
		}
		else if(lc == 5){
			duyet();
		}
		else if(lc == 6){
			if(empty()){
				printf("EMPTY\n");
			} 
			else printf("NOT EMPTY\n");
		}
		else break;
	}
}
