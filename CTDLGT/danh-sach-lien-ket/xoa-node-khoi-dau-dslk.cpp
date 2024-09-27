#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void insau(node **head, int x){
	node *moi = makenode(x);
	node *temp = *head;
	if(*head == NULL){
		*head = moi;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = moi;
}
void xoadau(node **head){
	if(*head == NULL) return;
	node *temp = *head;
	*head = temp->next;
	free(temp);
}

int main(){
	node *head = NULL;
	for(int i = 1; i <= 5; i++){
		insau(&head, i);
	}
	xoadau(&head);
	duyet(head);
}
