#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

int a[500000];
int n;


int main() {
	cin >> n;

	//first = val second = sameCnt
	stack<pair<int, int>> s;
	long long result = 0;

	while (n--) {
		int cur = 0;
		cin >> cur;

		int sameCnt = 1;

		while (!s.empty() && s.top().first <= cur) {
			result += s.top().second;
			if (s.top().first == cur) {
				sameCnt += s.top().second;
			}
			s.pop();
		}

		//사실 아래 조건은 if(!s.empty())만 써도 됨
		if (!s.empty() && s.top().first >= cur) {
			result++;
		}

		s.push({ cur, sameCnt });
	}

	cout << result;
}