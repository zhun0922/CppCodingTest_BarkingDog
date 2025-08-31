#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	string input = "";

	for (int i = 0; i < n; i++) {
		cin >> input;
		bool isEscape = false;
		stack<char> s;

		for (char& c : input) {
			if (c == '(') {
				s.push(c);
			}
			else {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					cout << "NO\n";
					isEscape = true;
					break;
				}
			}
		}

		if (isEscape) continue;

		if (s.empty()) cout << "YES\n";
		else cout << "NO\n";


	}
}