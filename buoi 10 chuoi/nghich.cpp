#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char chuoi1[100];
	char chuoi2[100];
	gets(chuoi1); 
	gets(chuoi2);
	if(strcmp(chuoi1, chuoi2) == 0){
		printf("chuoi1 bang chuoi2\n");
	}
	else if(strcmp(chuoi1, chuoi2) > 0){
		printf("chuoi1 lon hon chuoi2\n");
	}
	else printf("chuoi1 nho hon chuoi2\n");
} 
