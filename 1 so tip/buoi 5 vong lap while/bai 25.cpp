#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	n -= (n % 5);
	
	int somu5;
	for(int i = n; i >= 5; i -= 5){
		for(int l = 9; l >= 1; l--){
			int o = pow(5, l);
			if(i % o == 0){
				somu5 += l;
				break;
			}
		}
	}
	printf("%d\n", somu5);
	
	
	return 0;
}
