#include <iostream>

using namespace std;
int y, m;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,t = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> t;
		y += ((t / 30 + 1) * 10);
		m += ((t / 60 + 1) * 15);
	}
	if (y > m) {
		cout << "M " << m;
	}
	else if (y < m) {
		cout << "Y " << y;
	}
	else {
		cout << "Y M " << y;
	}
	
}