#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	string result;

	for (int i = 0; i < n; i++) {
		int j = 0;
		for (; j < i; j++) {
			cout << ' ';
		}
		for (; j < n; j++) {
			cout << '*';
		}
		cout << '\n';
	}
}