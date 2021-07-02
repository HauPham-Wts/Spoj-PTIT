#include<iostream>
using namespace std;

long long ucln(long long a, long long b) {
	while (b != 0) {
		long long temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long bcnn(long long a, long long b) {
	long long temp = ucln(a, b);
	return (a * b) / temp;
}

int main() {
	long long a, b;
	do {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		cout << ucln(a, b) << " " << bcnn(a, b) << endl;
	} while (1);
	return 0;
}