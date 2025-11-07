#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n, input;
long long sum;

int main() {
	cin >> n;
	stack<int> S;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0 && !S.empty()) {
			S.pop();
		}
		else {
			S.push(input);
		}
	}


	while (!S.empty()) {
		sum += S.top();
		S.pop();
	}

	cout << sum;
}