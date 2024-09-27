#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct sinhvien{
	char ma[10];
	char ten[100];
	float gpa; 
};
typedef struct sinhvien sv;
void nhap(sv *a){
	scanf("\n");
	gets(a->ma);
	gets(a->ten);
	scanf("%f", &a->gpa);
}
void in(sv a){
	printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}
void sx(sv a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i].gpa < a[j].gpa){
				sv tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int cmp(const void *a, const void *b){
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->gpa > y->gpa) return -1;
	return 1;
}
int main(){
	sv a[1000];
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		nhap(&a[i]);
	}
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
	printf("\n");
	qsort(a, n, sizeof(sv), cmp);
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
}
