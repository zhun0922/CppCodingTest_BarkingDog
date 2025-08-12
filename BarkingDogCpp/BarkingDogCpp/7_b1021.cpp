#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int n, k, result;
deque<int> DQ;


int main() {
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		DQ.push_back(i);
	}

	while (k--) {
		int a = 0;
		cin >> a;
		auto it = find(DQ.begin(), DQ.end(), a) - DQ.begin();

		if (a == DQ.front()) {
			DQ.pop_front();
		}

		
		else if (it >= DQ.size()/2 + 1) {
			while (a != DQ.front()) {
				int temp = DQ.back();
				DQ.pop_back();
				DQ.push_front(temp);
				result++;
			}
			DQ.pop_front();
		}
		else {
			while (a != DQ.front()) {
				int temp = DQ.front();
				DQ.pop_front();
				DQ.push_back(temp);
				result++;
			}
			DQ.pop_front();
		}
	}

	cout << result;
	
}