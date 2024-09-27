#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char a[10];
	fgets(a, 11, stdin);
	a[10] = '\0';
	printf("%d\n", strlen(a));
	printf("%s", a);

 
}

