#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct hocsinh{
	char ten[100];
	int diem;
};
typedef struct hocsinh hs;
void nhap2(hs *a){
	gets(a->ten);
	scanf("%d", &a->diem);
	getchar();
}
void in(hs a){
	printf("%s ", a.ten);
	printf("%d\n", a.diem);
}
int main(){
	hs a[1000];
	int n; scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++){
		nhap2(&a[i]);
	}
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
}
