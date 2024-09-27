#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main(){
	int n; scanf("%d", &n);
	int s = 0; 
	int v = 0; 
	int j = 0;
	int rac; 
	int sua;
	for(int i = 1; i <= n; i++){
		scanf("%d", &rac); 
		char ten[10]; 
		scanf("%s", ten); 
		if(strcmp(ten, "Sind") == 0){
			scanf("%d", &sua);
			s += sua; 
		}
		else if(strcmp(ten, "Vang") == 0){
			scanf("%d", &sua); 
			v += sua; 
		}
		else if(strcmp(ten, "Jersey") == 0){
			scanf("%d", &sua); 
			j += sua;
		}
	}
	int a[3]; 
	a[0] = s; 
	a[1] = v; 
	a[2] = j; 
	for(int i = 0; i < 2; i++){
		for(int j = i+1; j < 3; j++){
			if(a[i] < a[j]){
				int tmp = a[i]; 
				a[i] = a[j]; 
				a[j] = tmp; 
			}
		}
	}
	if(a[0] < 0){
		printf("%d", -a[0]); 
	}
	else printf("%d", a[0]);
	return 0; 
}
