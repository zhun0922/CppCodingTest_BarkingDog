#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n, input;
int arr[1000005];
int result[1000005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> S;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr[i] = input;
	}

	for (int i = n-1; i >= 0; i--) {
		while (!S.empty() && S.top() < arr[i]) {
			S.pop();
		}
		if (S.empty()) {
			result[i] = -1;
		}
		else {
			result[i] = S.top();
		}
		S.push(arr[i]);
	}
	
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i != n - 1) {
			cout << ' ';
		}
	}

}