#include <stdio.h>
#include <math.h>

int main() {
	char c;
	scanf("%c", &c);
	if(c >= 'a' && c <= 'y'){
		c += 1;
		printf("%c", c);
	}
	else if(c == 'z'){
		printf("a");
	}
	else if(c >= 'A' && c <= 'Y'){
		c += 33;
		printf("%c", c);
	}
	else if(c == 'Z'){
		printf("a");
	}
	else printf("INVALID");
	return 0;
}
