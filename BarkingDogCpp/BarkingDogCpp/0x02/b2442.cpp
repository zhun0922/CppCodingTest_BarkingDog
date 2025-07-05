#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i- 1; j++) cout << ' ' ;
		for (int l = 0; l < i * 2 + 1; l++) cout << '*';
		//for (int k = 0; k < n - i - 1; k++) cout << ' ';
		cout << '\n';
	}
}