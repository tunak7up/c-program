#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int data; 
	node *next; 
	node *prev;
};
typedef struct node node; 
node *makenode(int x){
	node *moi = (node*)malloc(sizeof(node));
	moi->data = x; 
	moi->next = NULL; 
	moi->prev = NULL; 
	return moi;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void themdau(node **head, int x){
	node *moi = makenode(x);
	moi->next = *head; 
	if(*head != NULL){
		(*head)->prev = moi;
	}
	*head = moi;
}
void themsau(node **head, int x){
	node *moi = makenode(x); 
	if(*head == NULL){
		*head = moi; return; 
	}
	node *tmp = *head; 
	while(tmp->next != NULL){
		tmp = tmp->next; 
	}
	tmp->next = moi; 
	moi->prev = tmp; 
}
int size(node *head){
	int cnt = 0; 
	while(head != NULL){
		cnt++; 
		head = head->next; 
	}
	return cnt;
}
void themgiua(node **head, int x, int k){
	node *moi = makenode(x); 
	int n = size(*head);
	if(k < 1 || k > n+1){
		return; 
	}
	if(k == 1){
		themdau(head, x);
	}
	node *tmp = *head; 
	for(int i = 1; i <= k-1; i++){
		tmp = tmp->next;
	}
	tmp->prev->next = moi; 
	moi->prev = tmp->prev; 
	moi->next = tmp; 
	tmp->prev = moi;
}
int main(){
	node *head = NULL; 
	for(int i = 1; i <= 5; i++){
		themsau(&head, i);
	}
	themgiua(&head, 100, 3);
	duyet(head);
}
