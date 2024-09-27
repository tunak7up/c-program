#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node node;

node* makenode(int x){
	node *moi = (node*)malloc(sizeof(node));
	moi->data = x; 
	moi->link = NULL;
	return moi;
}
void themsau(node **head, int x){
	node *tmp = *head;
	node *moi = makenode(x);
	if(*head == NULL){
		*head = moi; return;
	}
	while(tmp->link != NULL){
		tmp = tmp->link;
	}
	tmp->link = moi;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->link;
	}
}

int main(){
	node *head = NULL;
	for(int i = 0; i < 5; i++){
		themsau(&head, i);
	}
	duyet(head);
}
