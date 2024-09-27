#include <stdio.h>
#include <math.h>

int m[100000001];
void sang(){
	for(int i = 0; i <= 100000000; i++){
		m[i] = 1;
	}
	m[0] = m[1] = 0;
	for(int i = 2; i <= sqrt(100000000); i++){
		if(m[i]){
			for(int j = i*i; j <= 100000000; j+=i){
				m[j] = 0;
			}
		}
	}
}


int loc(int n){
	while(n){
		int r = n % 10;
		if(r != 2 && r != 3 && r !=5 && r != 7){
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int tong(int x){
	int sum = 0;
	while(x){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main() {
	int t; scanf("%d", &t);
	sang();
	
	while(t--){
		int a, b; scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(loc(i) && m[i] && m[tong(i)]){ //co cs la so nguyen to it nhat, xog den snt va cuoi la tong cac chu so la so nguyen to
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}

