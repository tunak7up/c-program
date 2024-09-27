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
void xoagiua(node **head, int k){
	if(k <= 0 || k > dem(*head)){
		return;
	}
	if(k == 1){
		node *tmp = *head; 
		*head = tmp->next; 
		free(tmp);
		return;
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
	node *head = NULL; 
	int cnt = 0;
	char kitu = ' ';
	while(kitu != '\n'){
		int x; scanf("%d", &x);
		themsau(&head, x);
		kitu = getchar();
		cnt++; 
	} 
	xoagiua(&head, 5);
	duyet(head);
}
