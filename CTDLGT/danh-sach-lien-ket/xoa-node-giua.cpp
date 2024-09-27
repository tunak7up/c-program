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
	node *temp = *head;
	if(*head == NULL){
		*head = moi;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = moi;
}
void xoagiua(node **head, int k){
	int n = dem(*head);
	if(k < 1 || k > n) return;
	node *temp = *head;
	if(*head == NULL){
		return;
	}
	if(temp->next == NULL){
		*head = NULL; 
		free(temp); return;
	}
	if(k == 1){
		*head = temp->next;
		free(temp);
		return;
	}
	for(int i = 1; i <= k-2; i++){
		temp = temp->next;
	}
	node *xoa = temp->next;
	temp->next = temp->next->next;
	free(xoa);
}
int main(){
	node *head = NULL; 
	int n; scanf("%d", &n);
	while(n--){
		int x; scanf("%d", &x);
		themsau(&head, x);
	}
	xoagiua(&head, 5);
	duyet(head);
}
