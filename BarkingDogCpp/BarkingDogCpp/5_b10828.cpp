#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int N;
stack<int> s;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		string input = "";
		cin >> input;
		if (input == "push") {
			int a = 0; 
			cin >> a;
			s.push(a);
		}
		else if (input == "top") {
			if (!s.empty()) cout << s.top() << '\n';
			else cout << -1 << '\n';
		}
		else if (input == "size") {
			cout << s.size() << '\n';
		}
		else if (input == "empty") {
			cout << (int)s.empty() << '\n';
		}
		else if (input == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';;
				s.pop();
			}
			else cout << -1 << '\n';
		}
	}
}