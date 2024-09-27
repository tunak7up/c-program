#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node node;
node* makeNODE(int x){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = x;
	newnode->next = NULL;
	return newnode; //ham nay tra ve mot con tro co phan data la x va phan link la NULL;
}

void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
int cnt(node *head){
	int dem = 0;
	while(head != NULL){
		dem++;
		head = head->next;
	}
	return dem;
}

void pushFront(node **head, int x){ //**head la con tro level 2 tro vao con tro level 1 dau tien
	node *newnode = makeNODE(x); //tao ra mot node moi co phan data la x va phan link la NULL;
	newnode->next = *head; //*head la toan tu giai tham chieu cua **head(level 2) de tro ve con tro dau tien
	*head = newnode; //*head giai tham chieu level 2 ve level 1, thay doi con tro level 1 dau tien
}
int main(){
	node *head = NULL;
	for(int i = 1; i <= 5; i++){
		pushFront(&head, i);
	}
	duyet(head);
	printf("%d", cnt(head));
	return 0;
}
