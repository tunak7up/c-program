#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//Preorder (NLR) ; Inorder (LNR) ; Postorder (LRN) 
//Preorder (DLR) Traversal; Inorder (LDR) Traversal; Postorder (LRD) Traversal

struct node{
	int data; 
	struct node *left; 
	struct node *right; 
};
typedef struct node node;
typedef node* TREE;

node *makenode(int x){
	node *moi = (node*)malloc(sizeof(node)); 
	moi->data = x; 
	moi->left = NULL; 
	moi->right = NULL; 
	return moi;
}
void themnode(TREE *t, int x){
	node *moi = makenode(x); 
	if(*t == NULL){
		*t = moi; 
		return;
	}
	if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		themnode(&(*t)->right, x); 
	}
}
void duyet(node *t){
	if(t != NULL){
		duyet(t->right); 
		duyet(t->left);
		
		printf("%d ", t->data); 
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
	duyet(t);
}

