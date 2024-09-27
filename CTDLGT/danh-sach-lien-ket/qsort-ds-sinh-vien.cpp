#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data); 
		head = head->next;
	}
}
void sapxep(node **head){
	for(node *i = *head; i != NULL; i = i->next){
		node *nodemin = i;
		for(node *j = i->next; j != NULL; j = j->next){
			if(j->data < nodemin->data){
				nodemin = j;
			}
		}
		int tmp = nodemin->data; 
		nodemin->data = i->data; 
		i->data = tmp;
	}
}
int main(){
	node *head = NULL; 
	char kitu = ' '; 
	while(kitu != '\n'){
		int x; scanf("%d", &x); 
		themsau(&head, x); 
		kitu = getchar();
	}
	sapxep(&head);
	duyet(head);
}
