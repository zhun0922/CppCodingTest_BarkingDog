#include <iostream>
#include <algorithm>
#include <deque>
#include <sstream>
#include <stack>

using namespace std;

//당연히 시간초과 
//사용법만 익히셈
//다시 풀 플5문
int n, l;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second < b.second;
}
int main() {

	deque<pair<int, int>> dq;

	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		int input = 0;
		cin >> input;
		dq.push_back({ i, input });

		if (dq.front().first < i - l + 1) {
			dq.pop_front();
		}

		auto min = min_element(dq.begin(), dq.end(), compare);

		cout << (*min).second << ' ';
	}
}
