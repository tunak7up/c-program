#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left; 
	struct node *right; 
};
typedef struct node node; 
typedef node* TREE; 

void khoitaocay(TREE &t){
	t = NULL; 
}

int main(){
	
}
