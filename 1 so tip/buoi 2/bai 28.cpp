#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	int m;
	scanf("%d%d%d", &a, &b, &c);
	m = a;
	if(m < b){
		m = b;
	}
	if(m < c){
		m = c;
	}
	
	if(a > 0 && b > 0 && c > 0 && a <= pow(10, 6) && b <= pow(10, 6) && c <= pow(10, 6) ){
		if(a + b + c > 2 * m){ //bat dau dieu kien dung
			if(a == b && b == c){
				printf("tam giac deu");
	        }
	        else if(a*a==2*b*b || b*b==2*c*c || c*c==2*a*a){
				printf("tam giac vuong can");
			}
			else if(a == b || b == c || c == a ){
	        	printf("tam giac can");
			}
			else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
				printf("tam giac vuong");
			}
			else printf("tam giac thuong");
		} //ket thuc dieu kien dung
		else{
	 		printf("INVALID");
        }
	}
	else printf("INVALID");
	
	
	
	return 0;
}
