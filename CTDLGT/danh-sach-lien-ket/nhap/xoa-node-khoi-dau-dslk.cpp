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
void themsau(node **head, int x){
	node *moi = makenode(x);
	if(*head == NULL){
		*head = moi;
		return;
	}
	node *tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = moi;
}
void xoadau(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	*head = tmp->next;
	free(tmp);
}

int main(){
	node *head = NULL;
	for(int i = 1; i <= 5; i++){
		themsau(&head, i);
	}
	xoadau(&head);
	duyet(head);
}
