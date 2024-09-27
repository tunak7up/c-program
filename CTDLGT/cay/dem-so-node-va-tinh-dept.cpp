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
	else if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		themnode(&(*t)->right, x); 
	}
}
void duyet(node *t){
	if(t == NULL) return; 
	else{
		duyet(t->left);
		printf("%d ", t->data); 
		 
		duyet(t->right); 
	}
}
int dem(node *t){
	if(t == NULL){
		return 0; 
	}
	else return 1 + dem(t->left) + dem(t->right);
}
int dept(node *t){
	if(t == NULL){
		return 0; 
	}
	else{
		int ld = dept(t->left); 
		int lr = dept(t->right); 
		if(ld > lr){
			return 1 + ld; 
		}
		else return 1 + lr; 
	}
}

int main(){
	node *t = NULL; 
	char c = ' '; 
	while(c != '\n'){
		int x; 
		scanf("%d", &x); 
		themnode(&t, x); 
		c = getchar(); 
	}
	duyet(t);
	printf("\n%d\n", dem(t));
	printf("%d\n", dept(t));
}
