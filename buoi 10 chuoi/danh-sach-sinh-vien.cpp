#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct sinhvien{
	char ten[100]; 
	int diem; 
};
typedef struct sinhvien sv;

struct node{
	sv data; 
	struct node *next;
};
typedef struct node node;
node *makenode(sv a){
	node *moi = (node*)malloc(sizeof(node));
	moi->data = a;
	moi->next = NULL; 
	return moi;
}
void themsau(node **head, sv a){
	node *moi = makenode(a);
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
		printf("%s %d\n", head->data.ten, head->data.diem);
		head = head->next;
	}
}
void sapxep(node **head){
	for(node *i = *head; i != NULL; i = i->next){
		node *maxnode = i; 
		for(node *j = i->next; j != NULL; j = j->next){
			if(maxnode->data.diem < j->data.diem){
				maxnode = j; 
			}
		}
		sv tmp = i->data;
		i->data = maxnode->data;
		maxnode->data = tmp;
	}
} 
int main(){
	node *head = NULL; 
	while(1){
		int lc; scanf("%d", &lc);
		if(lc == 1){
			sv a; 
			scanf("\n");
			gets(a.ten);
			scanf("%d", &a.diem);
			themsau(&head, a);
		}
		else break; 
	}
	sapxep(&head);
	duyet(head);
}
