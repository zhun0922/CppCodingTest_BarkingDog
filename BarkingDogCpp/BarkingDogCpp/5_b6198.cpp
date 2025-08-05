#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n;

int main() {
	cin >> n;

	stack<int> s;
	long long result = 0;

	for (int i = 0; i < n; i++) {
		long long cur = 0;
		cin >> cur;

		while (!s.empty() && s.top() <= cur) {
			s.pop();
		}
		result += s.size();
		s.push(cur);
	}

	cout << result;
}