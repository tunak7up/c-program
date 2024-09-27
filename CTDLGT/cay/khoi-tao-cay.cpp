#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int data; 
	struct node *pl; 
	struct node *pr; 
};
typedef struct node node; 
node *makenode(int x){
	node *moi = (node*)malloc(sizeof(node)); 
	moi->data = x; 
	moi->pl = NULL; 
	moi->pr = NULL; 
	return moi;
}
void themnode(node **t, int x){
	node *moi = makenode(x);
	if(*t == NULL){
		*t = moi;
	}
	else{
		if((*t)->data > x){
			themnode(&(*t)->pl, x);
		}
		else if((*t)->data < x){
			themnode(&(*t)->pr, x);
		}
	}
}
void duyet_NLR(node *t){
	if(t != NULL){
		printf("%d ", t->data);
		duyet_NLR(t->pl); 
		duyet_NLR(t->pr);
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
	duyet_NLR(t);
} 
