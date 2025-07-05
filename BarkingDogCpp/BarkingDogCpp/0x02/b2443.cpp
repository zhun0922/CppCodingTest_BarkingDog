#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n - i; j < n; j++) cout << ' ';
		for (int k = 0; k < n * 2 - i * 2 - 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

}