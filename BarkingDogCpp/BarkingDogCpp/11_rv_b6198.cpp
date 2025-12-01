#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

int n;
long long h, result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<long long> S; 

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		
		while (!S.empty() && h >= S.top()) {
			S.pop();
		}

		if (!S.empty()) {
			result += S.size();
		}

		S.push(h);
	}

	cout << result;
}