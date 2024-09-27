#include <stdio.h>
#include <string.h>

int main(){
	int a[] = {1, 2, 3, 4, 5, 1};
	int *ptr = &a[2];
	ptr += a[2];
	printf("%d", *ptr);
}
