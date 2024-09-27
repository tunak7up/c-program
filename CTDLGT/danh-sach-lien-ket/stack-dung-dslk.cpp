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
	if(*head == NULL){
		*head = moi; 
		return;
	}
	moi->next = *head; 
	*head = moi;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void pop(node **head){
	if(*head != NULL){
		node *tmp = *head; 
		*head = tmp->next; 
		free(tmp);
	}
}
int top(node *head){
	if(head != NULL){
		return head->data;
	}	
}
int size(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++; 
		head = head->next;
	}
	return cnt;
}
int main(){
	node *head = NULL; 
	while(1){
		printf("-----------------\n"); 
		printf("1. Push\n"); 
		printf("2. Pop\n");
		printf("3. Top\n");
		printf("4. Size\n");
		printf("0. Exit\n");
		printf("-----------------\n"); 
		int x; scanf("%d", &x);
		if(x == 1){
			printf("Nhap phan tu vao dau: ");
			int n; scanf("%d", &n);
			printf("\n");
			themdau(&head, n);
		}
		else if(x == 2){
			pop(&head);
		}
		else if(x == 3){
			printf("%d\n", top(head));
		}
		else if(x == 4){
			printf("%d\n", size(head));
		}
		else break;  
	}
}
