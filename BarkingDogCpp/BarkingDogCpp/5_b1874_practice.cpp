#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int n;
int a[100000];
int res[100000];

int main() {
	cin >> n;

	stack<int> s;

	string result = "";

	int idx = 1;

	while (n--) {
		int cur = 0;
		cin >> cur;

		while (idx <= cur) {
			s.push(idx++);
			result += "+\n";
		}

		if (s.top() != cur) {
			result = "NO";
			break;
		}
		s.pop();
		result += "-\n";
	}

	cout << result;
}