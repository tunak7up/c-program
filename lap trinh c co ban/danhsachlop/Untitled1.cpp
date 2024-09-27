#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct sinhvien{
	int stt;
	char mssv[100];
	char ten[100];
	char sdt[100];
	int diem;
};
typedef struct sinhvien sv;
int main(){
	sv a[300];
	FILE *f, *f2;
	f = fopen("input.txt", "r");	
	int i = 0;
	while(fscanf(f, "%d %s %s %s\n", &a[i].stt, a[i].mssv, a[i].ten, a[i].sdt) != EOF){
		i++;
	}
	fclose(f);
	
	f2 = fopen("bangdiem.txt", "w");
	for(int j = 0; j < i; j++){
		printf("Nhap diem cua sinh vien so %d: ", a[j].stt);
		scanf("%d", &a[j].diem);
		fprintf(f2, "%d %s %s %s %d\n", a[j].stt, a[j].mssv, a[j].ten, a[j].sdt, a[j].diem);
	}
	fclose(f2);
	return 0;
}
