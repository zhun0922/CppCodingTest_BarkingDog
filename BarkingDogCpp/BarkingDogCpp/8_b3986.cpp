#include<iostream>
#include <algorithm>
#include <stack>

using namespace std;
int n;
string input;
int result = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		stack<char> s;
		for (auto& it : input) {
			if (!s.empty() && s.top() == it) {
				s.pop();
			}
			else {
				s.push(it);
			}
		}
		if (s.empty()) result++;
	}

	cout << result;
}