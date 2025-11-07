#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n, input;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<pair<int, int>> S;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		while (!S.empty() && S.top().second < input) {
			S.pop();
		}

		if (S.empty()) {
			cout << 0 << ' ';
		}
		else {
			cout << S.top().first << ' ';
		}
		S.push({ i + 1, input });

	}
}