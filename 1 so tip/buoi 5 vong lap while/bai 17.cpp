#include <stdio.h>
#include <math.h>

int main() {
	long long n; scanf("%lld", &n);
	int chan = 0;
	int le = 0;
	if(n == 0){
		printf("NO");
	}
	else{
	while(0 < n && n <= pow(10, 18)){
		int cs = n % 10;
		if(cs % 2 == 0){
			chan++;
		}
		else{
			le++;
		}
		n /= 10;
		}
		if(chan == le){
			printf("YES");
		}
		else printf("NO");
	}
	return 0;
}
