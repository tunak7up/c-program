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
node *makenode(int x){
	node *moi = (node*)malloc(sizeof(node)); 
	moi->data = x; 
	moi->right = NULL; 
	moi->left = NULL; 
	return moi; 
}
void khoitaocay(node *&t){
	t = NULL; 
}
void themnode(node *&t, int x){
	node *moi = makenode(x); 
	if(t == NULL){
		t = moi; 
		return; 
	}
	if(t->data < x){
		themnode(t->right, x);
	}
	else if(t->data > x){
		themnode(t->left, x); 
	}
}
void duyet(node *t){
	if(t != NULL){
		duyet(t->left); 
		printf("%d ", t->data); 
		duyet(t->right);
	}
}
void xoanode(node *&t, int x){
	if(t == NULL){
		return; 
	}
	if(t->data < x){
		xoanode(t->right, x); 
	}
	else if(t->data > x){
		xoanode(t->left, x); 
	}
	else{
		node *tmp = t; 
		if(t->left == NULL){
			t = t->right; 
		}
		else if(t->right == NULL){
			t = t->left; 
		}
		free(tmp); 
	}
}
int main(){
	node *t; 
	khoitaocay(t);
	char kitu = ' '; 
	while(kitu != '\n'){ 
		int x; scanf("%d", &x); 
		themnode(t, x); 
		kitu = getchar(); 
	}
	xoanode(t, 6); 
	duyet(t); 
	
}
