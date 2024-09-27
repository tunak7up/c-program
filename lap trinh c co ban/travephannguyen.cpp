#include <stdio.h>

void tach(double n, int *phannguyen, double *phantp){
	*phannguyen = (int)n;
	*phantp = n - *phannguyen;
}

int main(){
	double n; scanf("%lf", &n);
	int phannguyen;
	double phantp;
	tach(n, &phannguyen, &phantp);
	printf("%d\n", phannguyen);
	printf("%.2lf", phantp);
}
