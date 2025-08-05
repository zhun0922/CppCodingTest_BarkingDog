#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int n;
int a[1000000];
int res[1000000];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int in = 0;
		cin >> in;
		a[i] = in;
	}

	stack<int> s;
	for (int i = n-1; i >= 0; i--) {
		while (!s.empty() && s.top() <= a[i]) {
			s.pop();
		}
		if (s.empty()) {
			res[i] = -1;
		}
		else {
			res[i] = s.top();
		}
		s.push(a[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << res[i];
		if (i != n - 1) {
			cout << ' ';
		}

	}
}