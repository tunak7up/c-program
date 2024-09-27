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
int size(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}
void chendau(node **head, int x){
	node *moi = makenode(x);
	moi->next = *head;
	*head = moi;
}
void chengiua(node **head, int x, int k){
	int n = size(*head);
	if(k < 1 || k > n+1) return;
	if(k == 1){
		chendau(head, x);
		return;
	}
	node *moi = makenode(x);
	node *temp = *head;
	for(int i = 1; i <= k-2; i++){
		temp = temp->next;
	}
	moi->next = temp->next;
	temp->next = moi;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
int main(){
	node *head = NULL; 
	for(int i = 0; i < 4; i++){
		chendau(&head, i);
	}
	int x; scanf("%d", &x);
	chengiua(&head, 7, x);
	duyet(head);
}
