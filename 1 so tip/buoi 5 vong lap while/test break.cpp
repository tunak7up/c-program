#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= n; i += 3){
		printf("%d ", i);
		if(i == 9){
			break;
		}
	} 

	return 0;
}
