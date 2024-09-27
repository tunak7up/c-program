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
node* makenode(int x){
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
	if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		themnode(&(*t)->right, x); 
	}
}
void duyet(node *t){
	if(t != NULL){
		duyet(t->left);
		printf("%d ", t->data); 
		duyet(t->right); 
	}
}
void khoitaocay(node **t){
	*t = NULL; 
}
troxvaoy(node **x, node **y){
	if((*y)->left != NULL){
		troxvaoy(x, &(*y)->left); 
	}
	else{
		(*x)->data = (*y)->data; 
		*x = *y; 
		*y = (*y)->right; 
	}
}
void xoanode(node **t, int x){
	if(t == NULL){
		return; 
	}
	if((*t)->data > x){
		xoanode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		xoanode(&(*t)->right, x); 
	}
	else{
		node *tmp = *t; 
		if((*t)->left == NULL){
			*t = (*t)->right; 
		}
		else if((*t)->right == NULL){
			*t = (*t)->left; 
		}
		else{
			troxvaoy(&tmp, &(*t)->right);
		}
		free(tmp); 
	}
}
int main(){
	node *t; 
	khoitaocay(&t); 
	char kitu = ' '; 
	while(kitu != '\n'){
		int x; scanf("%d", &x); 
		themnode(&t, x);
		kitu = getchar(); 
	}
	printf("Nhap node can xoa: "); 
	int m; scanf("%d", &m); 
	xoanode(&t, m);
	duyet(t); 
}
