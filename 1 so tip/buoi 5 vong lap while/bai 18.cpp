#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	if(n % 2 == 0){
		int thuong = n / 2;
		printf("%d\n", thuong);
		for(int i = 1; i <= thuong; i++){
			printf("2 ");
		}
	}
	else{
		if(n == 3){
			printf("1\n3");
		}
		else{
			int thuong = n / 2;
			printf("%d\n", thuong);
			for(int i = 1; i < thuong; i++){
			printf("2 ");
			}
			printf("3");
		}
	}
	return 0;
}
