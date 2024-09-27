#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node node;
node* makenode(int x){
	node *moi = (node*)malloc(sizeof(node));
	moi->data = x; 
	moi->next = NULL; 
	return moi;
}
void duyet(node *x){
	while(x != NULL){
		printf("%d ", x->data);
		x = x->next;
	}
}
int dem(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}
void themdau(int x, node **head){
	node *moi = makenode(x);
	moi->next = *head;
	*head = moi; 
}

int main(){
	node *head = NULL;
	for(int i = 1; i <= 5; i++){
		themdau(i, &head);
	}
	duyet(head);
}
