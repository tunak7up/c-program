#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("INF");
			}
			else printf("NO");
		}
		else{
			float n0 = - c / b;
			printf("%.2f", n0);
		}
	}
	else{
		float delta = b*b - 4*a*c;
		if(delta > 0){
			double x1 = (-b+sqrt(delta)) / (2*a);
			double x2 = (-b-sqrt(delta)) / (2*a);
			printf("%.2lf %.2lf", x1, x2);
		}
		else if(delta == 0){
			float x11 = -b/(2*a);
			printf("%.2f", x11);
		}
		else printf("NO");
	}
	return 0;
}
