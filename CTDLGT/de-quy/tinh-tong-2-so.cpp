#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char a[22];
	char b[22];
	scanf("%s%s", a, b);
	int n = strlen(a) - 1;
	int m = strlen(b) - 1;
		for(int i = n; i >= 0; i--){
			a[i+1] = a[i];
			a[i] = '0';
		}
		for(int i = m; i >= 0; i--){
			b[i+1] = b[i];
			b[i] = '0';
		}
		n++;
		m++;
	if(n < m){
		char tmp[22];
		strcpy(tmp, a);
		strcpy(a, b);
		strcpy(b, tmp);
		int temp = n; 
		n = m;
		m = temp;
		}
	if(n > m){
		for(int i = m; i >= 0; i--){
			b[i+n-m] = b[i];
			b[i] = '0';
		}
	}
	int x[n+1];
	int y[n+1];
	for(int i = 0; i <= n; i++){
		x[i] = a[i] - '0';
		y[i] = b[i] - '0';
	}
	int sum[n+1];
	for(int i = 0; i < n+1; i++){
		sum[i] = 0;
	}
	int res;
	for(int i = n; i >= 1; i--){
		res = 0;
		int tong = x[i] + y[i];
		if(tong >= 10){
			res = 1;
			tong -= 10;
		}
		sum[i] += tong;
		sum[i-1] += res;
	} 
	for(int i = 0; i <= n; i++){
		if(res == 0 && i == 0) continue;
		printf("%d", sum[i]);
	}
}

