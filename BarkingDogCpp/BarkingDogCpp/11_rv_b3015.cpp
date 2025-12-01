#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>

using namespace std;

int n;
int input;
long long result;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	stack<pair<int, int>> S;
	for (int i = 0; i < n; i++) {
		int curCnt = 1;
		cin >> input;
		while (!S.empty() && S.top().first <= input) {
			result += S.top().second;
			if (S.top().first == input) {
				curCnt += S.top().second;
			}
			S.pop();
		}

		if (!S.empty()) {
			result++;
		}

		S.push({ input, curCnt });
	}

	cout << result;
}