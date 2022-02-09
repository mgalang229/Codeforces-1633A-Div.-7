#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int ans = 14;	
		if (n <= 14) { // if n is less than or equal to 14, then 14 is the answer
			cout << ans << '\n';
			continue;
		}
		auto GetCount = [](int a, int b) { // count the digits where a and b differ
			int cnt = 0;
			while (a > 0) {
				cnt += (a % 10 != b % 10);
				a /= 10;
				b /= 10;
			}
			return cnt;
		};
		int cnt = INT_MAX;
		for (int x = 14; x < 1000; x++) {
			int n_digits = log10(n) + 1;
			int x_digits = log10(x) + 1;
			if (n_digits == x_digits) { // n and x must have equal no. of digits
  			int temp = GetCount(x, n);
  			if (x % 7 == 0 && temp < cnt) { // find the no. that is divisible by 7 with minimal replacement in digits (if compared to n)
  				ans = x;
  				cnt = temp;
  			}
  		}
		}
		cout << ans << '\n';
	}
	return 0;
}
