#include <stdio.h>
#include <math.h>

int main() {
	char c;
	scanf("%c", &c);
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		printf("YES");
	}
	else printf("NO");
	return 0;
}
