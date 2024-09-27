#include <stdio.h>
#include <math.h>

int main() {
	char a;
	scanf("%c", &a);
	if('A' <= a && a <= 'Z'){
		printf("YES");
	}
	else printf("NO");
	return 0;
}
