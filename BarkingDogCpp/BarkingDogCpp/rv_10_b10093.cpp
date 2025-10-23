#include <iostream>
#include <algorithm>

using namespace std;

long long  n, m;
int main() {
	cin >> n >> m;
	
	if (n > m) {
		swap(n, m);
	}
	if (n == m) {
		cout << 0;
	}
	else {
		cout << m - n - 1ll << '\n';
		for (long long i = n + 1ll; i < m; i++) {
			cout << i;
			if (i != m - 1ll) {
				cout << ' ';
			}
		}
	}
}