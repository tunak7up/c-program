#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check(char a[]){
	int n = strlen(a);
	int loi = 0;
	int l = 0; 
	int r = n - 1;
	if(n % 2 == 0){
		while(l < r){
			if(a[l] != a[r]){
				loi++;
			}
			l++;
			r--;
		}
		if(loi == 1) return 1;
		else return 0;
	}
	if(n % 2 == 1){
		while(l < r){
			if(a[l] != a[r]){
				loi++;
			}
			l++;
			r--;
		}
		if(loi == 0 || loi == 1){
			return 1;
		}
		else return 0;
	}
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		char c[1001];
		gets(c);
		if(check(c) == 1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
