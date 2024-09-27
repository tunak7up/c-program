#include <stdio.h>
#include <math.h>

int main() {
	char a;
	scanf("%c", &a);
	if(a >= 'a' && a <= 'z'){
		printf("YES");
	}
	else printf("NO");
	return 0;
}
