#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	for (int i = 1; i < n ; i++) {
		for (int j = 0; j < n - i; j++) cout << ' ';
		for (int k = 1; k < i * 2 ; k++) cout << '*';
		cout << '\n';
	}

	for (int i = 1; i < n * 2; i++) cout << '*';
	cout << '\n';

	for (int i = 1; i < n; i++) {
		for (int j = n - i; j < n; j++) cout << ' ';
		for (int k = 2 * i; k < n * 2 - 1; k++) cout << '*';
		cout << '\n';
	}
}