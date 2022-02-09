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
		if (n % 7 == 0) {
			cout << n;
		} else { // simply replace the last digit which will make the whole number divisible by 7
			int ans = -1;
			for (int d = 0; d < 10; d++) {
				int new_num = n - n % 10 + d;
				if (new_num % 7 == 0) {
					ans = new_num;
				}
			}
			cout << ans;
		}
		cout << '\n';
	}
	return 0;
}
