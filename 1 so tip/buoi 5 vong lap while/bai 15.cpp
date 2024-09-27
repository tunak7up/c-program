#include <stdio.h>
#include <math.h>

int main() {
	long long n; scanf("%d", &n);
	int chan = 0;
	int le = 0;
	if(n == 0){
		printf("1 0");
	}
	else{
		while(n > 0 && n <= pow(10, 18)){
			int cs = n % 10;
			if(cs % 2 == 0){
				chan++;
			}
			else{
				le++;
			}
			n /= 10;
		}
		printf("%d %d", chan, le);
	}
	return 0;
}
