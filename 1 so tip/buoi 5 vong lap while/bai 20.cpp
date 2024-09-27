#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	int mi = 0; int ch = 0;
	for(int i = 1; i <= n; i++){
		int m, c;
		scanf("%d%d", &m, &c);
		if(m > c){
			mi++;
		}
		if(m < c){
			ch++;
		}
	}
	if(mi > ch) printf("Mishka");
	if(mi < ch) printf("Chris");
	if(mi == ch) printf("Friendship is magic!^^");
	return 0;
}
