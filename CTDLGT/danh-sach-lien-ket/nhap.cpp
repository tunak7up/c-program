#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->link;
	}
}
void them(node **head, int x){
	node *moi = makenode(x);
	moi->link = *head;
	*head = moi;
}

int main(){
	node *head = NULL;
	for(int i = 0; i < 5; i++){
		them(&head, i);
	}
	duyet(head);
}
