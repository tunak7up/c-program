#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data; 
	struct node *left; 
	struct node *right; 
};
typedef struct node node; 
node *nmoi(int x){
	node *moi = (node*)malloc(sizeof(node)); 
	moi->data = x; 
	moi->left = NULL; 
	moi->right = NULL; 
	return moi;
}
void tn(node **t, int x){
	node *moi = nmoi(x); 
	if(*t == NULL){
		*t = moi; 
		return; 
	}
	if((*t)->data > x){
		tn(&(*t)->left, x); 
	}	
	else if((*t)->data < x){
		tn(&(*t)->right, x); 
	}
}
int m = -1e9-1; 
int max(node *t){
	while(t->right != NULL){
		t = t->right; 
	}
	return t->data; 
}

int main(){
	node *t = NULL; 
	char kitu = ' '; 
	while(kitu != '\n'){
		int x; scanf("%d", &x); 
		tn(&t, x); 
		kitu = getchar(); 
	}
	printf("%d", max(t));
}
