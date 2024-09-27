#include <stdio.h>
#include <math.h>

int main() {
	char kitu;
	scanf("%c", &kitu);
	
	if((kitu >= 'a') && (kitu <= 'z')){
		
		kitu -= 32;
	}
	printf("%c", kitu);
	return 0;
}
