#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	int m;
	scanf("%d%d%d", &a, &b, &c);
	m = a;
	if(m < b){
		m = b;
	}
	if(m < c){
		m = c;
	}
	printf("%d\n", m);
	if(a > 0 && b > 0 && c > 0 && a <= pow(10, 6) && b <= pow(10, 6) && c <= pow(10, 6) ){
		if(a + b + c > 2 * m){
			printf("YES");
		}
		else{
	 		printf("NO");
        }
	}
	else printf("NO");
	
	
	
	return 0;
}
