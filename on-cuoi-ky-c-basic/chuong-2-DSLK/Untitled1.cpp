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
void themdau(node **head, int x){
	node *moi = makenode(x); 
	moi->next = *head; 
	*head = moi;
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
int dem(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++; 
		head = head->next; 
	}
	return cnt; 
}
void themgiua(node **head, int x, int k){
	int cnt = dem(*head);
	if(cnt + 1 < k || k <= 0){
		return;
	}
	node *moi = makenode(x); 
	
	if(*head == NULL){
		*head = moi; 
		return; 
	}
	if(k == 1){
		themdau(head, x); return;
	}
	node *tmp = *head; 
	for(int i = 1; i <= k-2; i++){
		tmp = tmp->next;
	}
	node *tmp2 = tmp->next; 
	moi->next = tmp2; 
	tmp->next = moi; 
}
void xoadau(node **head){
	if(*head == NULL){
		return; 
	}
	node *tmp = *head; 
	*head = tmp->next; 
	free(tmp);
}
void xoacuoi(node **head){
	if(*head == NULL){
		return; 
	}
	if((*head)->next == NULL){
		*head = NULL; 
		return; 
	}
	node *tmp = *head; 
	while(tmp->next->next != NULL){
		tmp = tmp->next; 
	}
	node *tmp2 = tmp->next; 
	tmp->next = NULL; 
	free(tmp2);
}
void xoagiua(node **head, int k){
	int cnt = dem(*head);
	if(k <= 0 || k >= cnt+1){
		return;
	}
	if(k == 1){
		xoadau(head);  return;
	}
	if(k == cnt){
		xoacuoi(head); return;
	}
	if(*head == NULL){
		return; 
	}
	if((*head)->next == NULL){
		*head = NULL; return;
	}
	node *tmp = *head; 
	for(int i = 1; i <= k-2; i++){
		tmp = tmp->next; 
	}
	node *tmp2 = tmp->next; 
	tmp->next = tmp2->next; 
	free(tmp2);
}
int main(){
	node *head = NULL ;
	char c = ' '; 
	while(c != '\n'){
		int x; scanf("%d", &x); 
		themsau(&head, x); 
		c = getchar();
	}
	int n; scanf("%d", &n);
	xoagiua(&head, n);
	duyet(head);
}
