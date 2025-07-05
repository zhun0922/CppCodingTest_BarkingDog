#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		for (int k = 0; k < i; k++) cout << ' ';
		for (int j = 1; j < 2 * n - 2 * i; j++) cout << '*';
		cout << '\n';
	}
	for (int i = 0; i < n - 1; i++) cout << ' ';
	cout << '*';
	cout << '\n';


	for (int i = n - 2; i >= 0; i--) {
		for (int k = 0; k < i; k++) cout << ' ';
		for (int j = 1; j < 2 * n - 2 * i; j++) cout << '*';
		cout << '\n';
	}
}