#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct node{
	int data; 
	struct node *next; 
};
typedef struct node node; 
node *makenode(int x){
	node *moi = (node*)malloc(sizeof(node)); 
	moi->data = x; 
	moi->next = NULL; 
	return moi; 
}
void themnode(node **head, int x){
	node *moi = makenode(x); 
	if(*head == NULL){
		*head = moi; 
		return; 
	}
	node *tmp = *head; 
	while(tmp->next != NULL && tmp->data != x){
		tmp = tmp->next; 
	}
	if(tmp->data == x){
		return; 
	}
	tmp->next = moi; 
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data); 
		head = head->next; 
	}
}
int main(){
	node *head = NULL;
	char s[10]; 
	scanf("%s", s); 
	while(strcmp(s, "insert") == 0){
		int x; scanf("%d", &x); 
		themnode(&head, x); 
		scanf("%s", s); 
	}
	duyet(head);
	return 0; 
}
