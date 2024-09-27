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
	if((*t)->data > x){
		themnode(&(*t)->left, x); 
	}
	else if((*t)->data < x){
		themnode(&(*t)->right, x); 
	}
}

node* timkiem(node *t, int x){
	if(t == NULL){
		return NULL; 
	}
	else if(t != NULL){
		if(t->data == x){ 
			return t;  
		}
		else if(t->data > x){
			timkiem(t->left, x);
		}
		else if(t->data < x){
			timkiem(t->right, x);
		}
	}
}
node *search(node *t, int x){
	
	if(t != NULL){
		if(t->data > x){
			t = search(t->left, x); 
		}
		else if(t->data < x){
			t = search(t->right, x); 
		}
		return t; 
	}
}
node *insert(node *t, int x){
	if(t == NULL){
		t = makenode(x); 
	}
	else if(x < t->data){
		t->left = insert(t->left, x); 
	}
	else if(x > t->data){
		t->right = insert(t->right, x); 
	}
	return t; 
}
node *findmin(node *t){
	if(t == NULL) return NULL; 
	else{
		if(t->left == NULL) return t;
		else return(findmin(t->left));
	} 
}
node *xoa(node *t, int x){
	node *tmp; 
	if(t == NULL) printf("NOT FOUND"); 
	else if(x < t->data){
		t->left = xoa(t->left, x); 
	}
	else if(x > t->data){
		t->right = xoa(t->right, x); 
	}
	else{
		if(t->left != NULL && t->right != NULL){
			tmp = findmin(t->right);
			t->data = tmp->data; 
			t->right = xoa(t->right, t->data);  
		}
		else{
			tmp = t; 
			if(t->left == NULL){
				t = t->right; 
			}
			else if(t->right == NULL){
				t = t->left;
			}
			free(tmp);
			
		}
	}
	return t; 
}
void duyet(node *t){
	if(t != NULL){
		duyet(t->left); 
		printf("%d ", t->data); 
		duyet(t->right); 
	}
}
int main(){
	node *t = NULL; 
	char kitu = ' '; 
	while(kitu != '\n'){ 
		int x; scanf("%d", &x); 
		t = insert(t, x);
		kitu = getchar(); 
	}
	xoa(t, 1);
	duyet(t);
//	int a; 
//	scanf("%d", &a); 
//	node *p = search(t, a);
//	if(p != NULL){
//		printf("YES"); 
//	}
//	else printf("NO");
}
