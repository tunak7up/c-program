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
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void insau(node **head, int x){
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
void xoa(node **head){
	if(*head == NULL){
		return;
	}
	node *tmp = *head; 
	if(tmp->next == NULL){
		*head = NULL; 
		free(tmp);
		return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	node *tmp2 = tmp->next;
	tmp->next = NULL; 
	free(tmp2);
}
int main(){
	node *head = NULL; 
	for(int i = 1; i <= 1; i++){
		insau(&head, i);
	}
	xoa(&head);
	duyet(head);
}
