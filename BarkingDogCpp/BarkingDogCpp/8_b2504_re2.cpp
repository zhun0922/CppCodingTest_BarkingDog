#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

string input;
int result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mul = 1;
	cin >> input;

	stack<char> s;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(') {
			mul *= 2; 
			s.push('(');
		}
		else if (input[i] == '[') {
			mul *= 3;
			s.push('[');
		}
		else if (input[i] == ')') {
			if (i - 1 < 0) {
				cout << 0;
				return 0;
			}
			else if (input[i - 1] == '(') { 
				result += mul;
			}
			mul /= 2;
			if (!s.empty() && s.top() == '(') s.pop();
			else {
				cout << 0;
				return 0;
			}
		}
		else if (input[i] == ']') {
			if (i - 1 < 0) {
				cout << 0;
				return 0;
			}
			else if (input[i - 1] == '[') {
				result += mul;
			}
			mul /= 3;
			if (!s.empty() && s.top() == '[') s.pop();
			else {
				cout << 0;
				return 0;
			}
		}
	}

	if (!s.empty()) { cout << 0;}
	else { cout << result; }

}