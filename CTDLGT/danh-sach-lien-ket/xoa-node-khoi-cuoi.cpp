#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
int dem(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}
void insau(node **head, int x){
	node *temp = *head;
	node *moi = makenode(x);
	if(*head == NULL){
		*head = moi; return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = moi;
}
void xoacuoi(node **head){
	node *temp = *head;
	if(*head == NULL){
		return;
	}
	if(temp->next == NULL){
		*head = NULL; free(temp);
		return;
	}
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	node *temp2 = temp->next;
	temp->next = NULL; 
	free(temp2);
}
int main(){
	node *head = NULL;
	for(int i = 0; i < 1; i++){
		insau(&head, i);
	}
	xoacuoi(&head);
	duyet(head);
}

