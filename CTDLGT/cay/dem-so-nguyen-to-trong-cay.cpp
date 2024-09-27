#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int check(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return 0; 
		}
	}
	return x > 1; 
}

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
	if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		themnode(&(*t)->right, x); 
	}
}
void dem(node *t, int *cnt){
	if(t != NULL){
		if(check(t->data)){
			(*cnt)++; 
		}
		dem(t->left, cnt); 
		dem(t->right, cnt); 
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
	int x = 0; 
	int *cnt = &x; 
	dem(t, cnt);
	printf("%d", x);
}

