#include <stdio.h>

int is_lower(char c){ //ktra in thuong
	if(c >= 'a' && c <= 'z')
	return 1;
	return 0;
}

int is_upper(char c){ //ktra in hoa
	if(c >= 'A' && c <= 'Z')
	return 1;
	return 0;
}

int is_alpha(char c){ //ktra chu cai
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		return 1;
	}
	return 0;
}

int is_digit(char c){
	if(c >= '0' && c <= '9'){
		return 1;
	}
	return 0;
}

char to_lower(char c){ //in hoa thanh in thuong
	if(c >= 'A' && c <= 'Z'){
		c += 32;
	}
	return c;
}

char to_upper(char c){ //in thuong thanh in hoa
	if(c >= 'a' && c <= 'z'){
		c -= 32;
	}
	return c;
}

int strlen(char c[]){
	int cnt = 0;
	while(c[cnt] != '\0'){
		cnt++;
	}
	return cnt;
}

char* strlwr(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z'){
			c[i] += 32;
		}
	}
	return c;
}

char* strupr(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = to_upper(c[i]); 
	}
	return c;
}

int min(int a, int b){
	if(a < b){
		return a;
	}
	return b;
}

int strcmp(char c[], char d[]){
	int n1 = strlen(c);
	int n2 = strlen(d);
	for(int i = 0; i < min(n1, n2); i++){
		if(c[i] != d[i]){
			if(c[i] > d[i]){
				return 1;
			}
			else return -1;
		}
	}
	if(n1 == n2) return 0;
	else if(n1 > n2) return 1;
	else return -1;
}

int strcmpi(char c[], char d[]){
	c = strlwr(c);
	d = strlwr(d);
	return strcmp(c, d);
}

long long atoll(char c[]){
	int res = 0;
	for(int i = 0; i < strlen(c); i++){
		res = res * 10 + c[i] - '0';
	}
	return res;
} 

char* nguoc(char c[]){
	int l = 0;
	int r = strlen(c) - 1;
	while(l < r){
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		l++; r--;
	}
	return c;
}

int main(){
	char c[10];
	gets(c);
	printf("%s", nguoc(c));
}









