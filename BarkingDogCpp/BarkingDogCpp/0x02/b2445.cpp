#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) cout << "*";
		for (int k = 1; k <= 2 * n - 2 * i; k++) cout << " ";
		for (int j = 1; j <= i; j++) cout << "*";
		cout << "\n";
	}
	for (int i = 0; i < 2 * n; i++) cout << "*";

	cout << "\n";

	for (int i = n - 1; i >= 1; i--) {
		for (int j = i; j >= 1; j--) cout << "*";
		for (int k = 2 * n - 2 * i; k > 0; k--) cout << " ";
		for (int j = i; j >= 1; j--) cout << "*";
		cout << "\n";
	}
}