#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
		char c[100001];
		gets(c);
		int tong = 0;
		for(int i = 0; i < strlen(c); i++){
			int res = 0;
			while(isdigit(c[i]) && i < strlen(c)){
				res = res*10 + c[i] - '0';
				i++; 
			}
			tong += res;
		}
		printf("%d\n", tong);
	}
}
