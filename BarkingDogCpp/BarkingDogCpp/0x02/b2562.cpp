#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int max = 0;
	int idx = 0;

	for (int i = 0; i < 9; i++) {
		int a = 0;
		cin >> a;
		if (a > max) {
			max = a;
			idx = i+1;
		}
	}

	cout << max << '\n' << idx;
}