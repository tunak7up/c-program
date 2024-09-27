#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int t; scanf("%d", &t);
	getchar();
	for(int x = 1; x <= t; x++){
		printf("#Test %d:\n", x);
		char c[1001];
		char d[1001];
		gets(c);
		gets(d);
		int cnt[10000] = {0};
		for(int i = 0; i < strlen(c); i++){
			if(isdigit(c[i])){
				int heso = 0;
				while(isdigit(c[i])){
					heso += heso*10 + c[i] - '0';
					i++;
				}
				i += 3;
				int somu = 0;
				while(isdigit(c[i]) && i < strlen(c)){
					somu += somu*10 + c[i] - '0';
					i++;
				}
				cnt[somu] += heso;
			}
		}
		for(int i = 0; i < strlen(d); i++){
			if(isdigit(d[i])){
				int heso = 0;
				while(isdigit(d[i])){
					heso += heso*10 + d[i] - '0';
					i++;
				}
				i += 3;
				int somu = 0;
				while(isdigit(d[i]) && i < strlen(d)){
					somu += somu*10 + d[i] - '0';
					i++;
				}
				cnt[somu] += heso;
			}
		}
		int mumin;
		for(int i = 0; i < 10000; i++){
			if(cnt[i] > 0){
				mumin = i;
				break;
			}
		}
		for(int i = 9999; i > mumin; i--){
			if(cnt[i] > 0){
				printf("%d*x^%d + ", cnt[i], i);
			}
		}
		printf("%d*x^%d", cnt[mumin], mumin);
	}
}
