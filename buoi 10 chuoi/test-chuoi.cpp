#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct sinhvien{
	char ten[100];
	int diem; 
};
typedef struct sinhvien sv; 
int main(){
	sv a; 
	gets(a.ten); 
	scanf("%d", &a.diem); 
	printf("%s %d", a.ten, a.diem);
}


