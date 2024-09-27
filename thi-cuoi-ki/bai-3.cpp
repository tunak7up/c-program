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
void xoadau(node **head){
	if(*head == NULL){
		return; 
	}
	node *tmp = *head; 
	*head = tmp->next; 
	free(tmp);
}

int main(){
	node *a = NULL; 
	node *b = NULL; 
	char cmd;
	int id;  
	int x; 
	scanf("%c", &cmd); 
	while(cmd != '#'){
		scanf("%d%d", &id, &x); 
		if(id == 1){
			if(cmd == 'I'){
				themdau(&a, x);
			}
			else if(cmd == 'A'){
				themsau(&a, x);
			}
		}
		else if(id == 2){
			if(cmd == 'I'){
				themdau(&b, x);
			}
			else if(cmd == 'A'){
				themsau(&b, x);
			}
		}
		scanf("%c", &cmd);
	}
	int da = dem(a); 
	int db = dem(b);
	if(da >= db){
		for(int i = 1; i <= db; i++){
			printf("%d %d ", a->data, b->data);
			xoadau(&a); 
			xoadau(&b);
		}
		for(int i = 1; i <= da - db; i++){
			printf("%d ", a->data); 
			xoadau(&a);
		}
	}
	else{
		for(int i = 1; i <= da; i++){
			printf("%d %d ", a->data, b->data);
			xoadau(&a); 
			xoadau(&b);
		}
		for(int i = 1; i <= db - da; i++){
			printf("%d ", b->data); 
			xoadau(&b);
		}
	}
	return 0;
}
	

