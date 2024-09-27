#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
	moi->left = NULL; 
	moi->right = NULL; 
	return moi; 
}
void themnode(node **t, int x){
	node *moi = makenode(x); 
	if(*t == NULL){
		*t = moi; 
		return; 
	}
	if((*t)->data < x){
		themnode(&(*t)->right, x);	
	}
	else if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
}
void duyet2(node *t){
	if(t != NULL){
		if(t->left != NULL && t->right != NULL){
			printf("%d ", t->data); 
		}
		duyet2(t->left); 
		duyet2(t->right); 
	}
}
void duyet1(node *t){
	if(t != NULL){
		if((t->left != NULL && t->right == NULL) || (t->left == NULL && t->right != NULL)){
			printf("%d ", t->data); 
		}
		duyet1(t->left); 
		duyet1(t->right); 
	}
}
void duyet0(node *t){
	if(t != NULL){
		if(t->left == NULL && t->right == NULL){
			printf("%d ", t->data); 
		}
		duyet0(t->left); 
		duyet0(t->right); 
	}
}
int main(){
	node *t = NULL; 
	char kitu = ' '; 
	while(kitu != '\n'){
		int x; scanf("%d", &x); 
		themnode(&t, x); 
		kitu = getchar(); 
	}
	duyet2(t);
	printf("\n"); 
	duyet1(t);
	printf("\n");
	duyet0(t);
	printf("\n");
}
