#include <stdio.h>

void tower(int n, char a, char b, char c){
	if(n == 1){
		printf("%c----%c\n", a, c);
		return;
		
	}
	tower(n-1, a, c, b);
	tower(1, a, b, c);
	tower(n-1, b, a, c);
}

int main(){
	int n; scanf("%d", &n);
	char a = 'A';
	char b = 'B';
	char c = 'C';
	tower(n, a, b, c);
}
