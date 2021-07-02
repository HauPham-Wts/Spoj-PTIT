#include<iostream>
#include<cmath>
using namespace std;

long long sumdiv(long long n) {
	long long ans = 0;
	long long sq = sqrt(n);
	for (int i = 1; i <= sq; i++) {
		if (n % i == 0) {
			ans += i + n / i;
		}
	}
	if (sq * sq == n) {
		ans -= sq;
	}
	return ans;
}

int main() {
	long long n;
	cin >> n;
	long long num;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		cout << sumdiv(num) << endl;
	}
	return 0;
}