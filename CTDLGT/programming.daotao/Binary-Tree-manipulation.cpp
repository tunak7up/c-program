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
}
node *timkiem(node *t, int x){
	if(t == NULL){
		return NULL; 
	}
	else{
		if(t->data == x){
			return t; 
		}
		else{
		
		node *p = timkiem(t->left, x); 
		if(p != NULL){
			return p; 
		}
		return timkiem(t->right, x); 
		}
	}
}
void themtrai(node **t, int y, int x){
	if(*t == NULL){
		return; 
	}
	else{
		if((*t)->data == x && (*t)->left == NULL){  
			(*t)->left = makenode(y);
		}
		else{
			themtrai(&((*t)->left), y, x); 
			themtrai(&((*t)->right), y, x); 
		}
	}
}
void themphai(node **t, int y, int x){
	if(*t == NULL){
		return; 
	}
	else{
		if((*t)->data == x && (*t)->right == NULL){
			(*t)->right = makenode(y); 
		}
		else{
			themphai(&((*t)->left), y, x); 
			themphai(&((*t)->right), y, x); 
		}
	}
}

void duyet(node *t){
	if(t != NULL){
		printf("%d ", t->data); 
		duyet(t->left); 
		duyet(t->right); 
	}
}
void duyet2(node *t){
	if(t != NULL){
		duyet2(t->left); 
		printf("%d ", t->data); 
		
		duyet2(t->right); 
	}
}
void duyet3(node *t){
	if(t != NULL){
		duyet3(t->left);
		duyet3(t->right);
		printf("%d ", t->data);
		 
	}
}
int main(){
	node *t = NULL; 
	char kitu[15]; 
	scanf("%s", kitu); 
	int x; 
	scanf("%d", &x); 
	themnode(&t, x); 
	
	while(strcmp(kitu, "*") != 0){
		char kiturac[100];
		scanf("%s", kitu); 
		
		if(strcmp(kitu, "AddLeft") == 0){
			int u, v; scanf("%d%d", &u, &v);
			if(timkiem(t, u) == NULL && timkiem(t, v) != NULL){
				themtrai(&t, u, v);
			} 
		}
		else if(strcmp(kitu, "AddRight") == 0){
			int u, v; scanf("%d%d", &u, &v);
			if(timkiem(t, u) == NULL && timkiem(t, v) != NULL){
				themphai(&t, u, v);
			}
		}
		else if(strcmp(kitu, "PreOrder") == 0){
			duyet(t); 
			printf("\n");
		}
		else if(strcmp(kitu, "InOrder") == 0){
			duyet2(t);
			printf("\n");
		}
		else if(strcmp(kitu, "PostOrder") == 0){
			duyet3(t);
			printf("\n");
		}
	}
	return 0;
}
