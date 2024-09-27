#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct sinhvien{
	char name[100];
	int toan, li, hoa;
	float tb;
};
typedef struct sinhvien sv;

int cmp(const void *a, const void *b){
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->tb > y->tb){
		return -1;
	}
	return 1;
}


int main(){
	sv a[300];
	FILE *f, *f2;
	f = fopen("student.txt", "r");
	int n; fscanf(f, "%d\n", &n);
	for(int i = 0; i < n; i++){
		fscanf(f, "%[^0-9] %d %d %d", a[i].name, &a[i].toan, &a[i].li, &a[i].hoa);
		a[i].tb = (float)(a[i].toan + a[i].li + a[i].hoa)/3;
	}
	fclose(f);
	f2 = fopen("student.dat", "w");
	for(int i = 0; i < n; i++){
		fprintf(f2, "%s %f", a[i].name, a[i].tb);
	}
	fclose(f2);
	qsort(a, n, sizeof(sv), cmp);
	for(int i = 0; i < n; i++){
		printf("%s %.2f", a[i].name, a[i].tb);
	}
	return 0;
}
