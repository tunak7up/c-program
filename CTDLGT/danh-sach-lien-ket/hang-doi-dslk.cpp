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

void push(node **head, int x){
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
void pop(node **head){
	if(*head == NULL) return; 
	node *tmp = *head; 
	*head = tmp->next; 
	free(tmp);
}
int front(node *head){
	return head->data;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
int main(){
	node *head = NULL; 
	while(1){
		printf("-----------\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. front\n");
		printf("4. duyet\n");
		printf("0. break\n");
		printf("-----------------\n");
		printf("Nhap lua chon: "); 
		int lc; scanf("%d", &lc);
		if(lc == 1){
			int x; scanf("%d", &x);
			push(&head, x);
		}
		else if(lc == 2){
			pop(&head);
		}
		else if(lc == 3){
			printf("%d\n", front(head));
		}
		else if(lc == 4){
			duyet(head);
			printf("\n");
		}
		else break;
	}
}
