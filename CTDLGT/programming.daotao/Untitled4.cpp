#include <bits/stdc++.h>
using namespace std;

long long NcR(int n, int r)
{

	long long p = 1, k = 1;

	// C(n, r) == C(n, n-r),
	// choosing the smaller value
	if (n - r < r)
		r = n - r;

	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;

			// gcd of p, k
			long long m = __gcd(p, k);

			// dividing by gcd, to simplify
			// product division by their gcd
			// saves from the overflow
			p /= m;
			k /= m;

			n--;
			r--;
		}

		// k should be simplified to 1
		// as C(n, r) is a natural number
		// (denominator should be 1 ) .
	}

	else
		p = 1;

	return p;
}

// Driver code
int main()
{
	int n, r;
	scanf("%d",&r);
	scanf("%d",&n);

	printf("%lld",NcR(n, r));

	return 0;
}
