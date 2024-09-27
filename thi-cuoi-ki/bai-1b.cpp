#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct date{
	int day; 
	char name[10]; 
	int sl;
};
typedef struct date date;
int max(int a, int b, int c){
	int max = a; 
	int max1 = -1e9-1;
	int max2 = -1e9-1;
	if(a <= b){
		max1 = b; 
		max = b; 
	}
	if(a <= c){
		max2 = c;
		max = c;  
	}
	if(max1 < max2){
		return max2; 
	}
	else if(max1 > max2){
		return max1;
	}
	else return max; 
}

int main(){
	int n; scanf("%d", &n); 
	date a[370];
	for(int i = 0; i < 370; i++){
		a[i].sl = -1e9-1;
	}
	int s = 0; 
	int v = 0; 
	int j = 0;
	int to = max(s, v, j);
	char bomax = 'm';
	for(int i = 1; i <= n; i++){
		date ngay; 
		scanf("%d", &ngay.day);
		scanf("%s", ngay.name);
		scanf("%d", &ngay.sl);
		a[ngay.day] = ngay;
	}
	int cnt = 0;
	for(int i = 0; i < 370; i++){
		if(a[i].sl != -1e9-1){
			if(strcmp(a[i].name, "Sind") == 0){
				s += a[i].sl;
				if(s >= max(s, v, j) && bomax != 's'){
					bomax = 's';
					to = s; 
					cnt++; 
				}
				else if(s < j){
					if(j >= v){
						bomax = 'j';
						to = j; 
						cnt++;
					}
					else{
						bomax = 'v';
						to = v; 
						cnt++;
					}
				}
			}
			else if(strcmp(a[i].name, "Vang") == 0){
				v += a[i].sl;
				if(v >= max(s, v, j) && bomax != 'v'){
					bomax = 'v';
					to = v; 
					cnt++; 
				}
				else if(v <= j){
					if(j >= s){
						bomax = 'j';
						to = j; 
						cnt++; 
					}
					else{
						bomax = 's';
						to = s; 
						cnt++;
					}
				}
			}
			else if(strcmp(a[i].name, "Jersey") == 0){
				j += a[i].sl;
				if(j >= max(s, v, j) && bomax != 'j'){
					bomax = 'j';
					to = j; 
					cnt++; 
				}
				else if(j <= v){
					if(v >= s){
						bomax = 'v';
					to = v; 
					cnt++;
					}
					else{
						bomax = 's';
						to = s; 
						cnt++;
					}
				}
			}
		}
	}
	printf("%d", cnt); 
	return 0;
}
