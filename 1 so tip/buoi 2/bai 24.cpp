#include <stdio.h>
#include <math.h>

int main() {
	char c;
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z'){
		c -= 32;
		printf("%c", c);
	}
	else printf("%c", c);
	return 0;
}
