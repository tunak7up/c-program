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
	else{
		if((*t)->data > x){
			themnode(&(*t)->left, x);
		}
		else if((*t)->data < x){
			themnode(&(*t)->right, x);
		}
	}
}
void duyet(node *t){
	if(t != NULL){
		printf("%d ", t->data); 
		duyet(t->right); 
		duyet(t->left);
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
