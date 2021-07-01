#include<iostream>
using namespace std;

bool check(int n) {
	int z = n;
	int ans = 0;
	while (n != 0) {
		int temp = n % 10;
		ans = ans * 10 + temp;
		n /= 10;
	}
	if (z == ans) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (check(a[i])) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}