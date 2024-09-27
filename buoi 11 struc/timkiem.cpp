#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct sinhvien{
	char ten[100];
	float gpa;
	char ma[10];
};
typedef struct sinhvien sv;
void nhap(sv *a){
	scanf("%s", a->ma);
	scanf("\n");
	gets(a->ten);
	scanf("%f", &a->gpa);
}
void in(sv a){
	printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}
void timkiem(sv a[], int n, char s[]){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].ma, s) == 0){
			in(a[i]); return;
		}
	}
	printf("khong hop le!\n");
}
void timkiem2(sv a[], int n){
	float max = 0; int vt;
	for(int i = 0; i < n; i++){
		if(a[i].gpa > max){
			max = a[i].gpa;
			vt = i;
		}
	}
	in(a[vt]);
}
void sx(sv a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i].gpa < a[j].gpa){
				sv tmp = a[i];
				
			}
		}
	}
} 
int main(){
	int n; scanf("%d", &n);
	sv a[n];
	for(int i = 0; i < n; i++) nhap(&a[i]);
	for(int i = 0; i < n; i++) in(a[i]);


	timkiem2(a, n);
} 
