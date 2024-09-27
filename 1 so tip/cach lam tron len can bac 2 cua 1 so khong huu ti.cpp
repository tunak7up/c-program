#include <stdio.h>
#include <math.h>

int main() {
	int a; scanf("%d", &a);
	int can = sqrt(a);
	if(can * can < a){
		can++;
	}
	printf("%d", can);
}
