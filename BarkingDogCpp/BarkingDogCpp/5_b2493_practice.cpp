#include <iostream>
#include <stack>
#include <algorithm>
#include <utility>

using namespace std;

int n;
int res[500000];

int main() {
	cin >> n;

	//first = val second = idx
	stack<pair<int, int>> s;

	for (int i = 0; i < n; i++) {
		int cur = 0;
		cin >> cur;

		while (!s.empty() && s.top().first < cur) {
			s.pop();
		}
		if (s.empty()) {
			res[i] = 0;
		}
		else{
			res[i] = s.top().second;
		}

		s.push({cur, i + 1});
	}

	for (int i = 0; i < n; i++) {
		cout << res[i] << ' ';
	}
}