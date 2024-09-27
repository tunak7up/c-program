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
}
int dem(node *head){
	int cnt = 0; 
	while(head != NULL){
		cnt++; 
		head = head->next;
	}
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void themsau(int x, node **head){
	node *moi = makenode(x);
	if(*head == NULL){
		*head = moi; return;
	}
	node *tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = moi;
}
int main(){
	node *head = NULL; 
	for(int i = 1; i < 6; i++){
		themsau(i, &head);
	}
	duyet(head);
}
