#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data; 
	struct node *next;
};
typedef struct node node;
node* makenode(int x){
	node *moi = (node*)malloc(sizeof(x));
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
int dem(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	} 
	return cnt;
}
void themsau(node **head, int x){
	node *moi = makenode(x);
	node *tmp = *head;
	if(*head == NULL){
		*head = moi;
		return;
	}
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = moi;
}

void chen(int x, node **head, int k){
	node *moi = makenode(x);
	node *tmp = *head;
	if(*head == NULL){
		*head = moi;
		return;
	}
	if(k <= 0 || k > 1 + dem(*head)){
		return;
	}
	if(k == 1){
		moi->next = *head;
		*head = moi;
		return;
	}
	if(k == 2){
		moi->next = tmp->next;
		tmp->next = moi;
		return;
	}
	
	for(int i = 1; i <= k-2; i++){
		tmp = tmp->next;
	}
	moi->next = tmp->next;
	tmp->next = moi;
}
int main(){
	node *head = NULL; 
	for(int i = 1; i <= 5; i++){
		themsau(&head, i);
	}
	chen(10, &head, 6);
	duyet(head);
}
