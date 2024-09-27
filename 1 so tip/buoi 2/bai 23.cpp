#include <stdio.h>
#include <math.h>
//a-z: 97-122 
//A-Z: 65-90
int main() {
	char c;
	scanf("%c", &c);
	printf("%d\n", c);
	if(c >= 'A' && c <= 'Z'){
		c += 32;
		printf("%c", c);
	}
	else printf("%c", c);
	return 0;
}
