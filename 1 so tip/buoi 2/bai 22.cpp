#include <stdio.h>
#include <math.h>

int main() {
	char a;
	scanf("%c", &a);
	printf("%d\n", a);
	if((a >= 48) && (a <= 57)){
		printf("YES");
	}
	else printf("NO");
	return 0;
}
