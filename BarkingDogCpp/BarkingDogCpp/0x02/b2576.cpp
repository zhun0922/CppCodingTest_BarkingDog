#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a, sum;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<unsigned int> vec;

	for (unsigned int i = 0; i < 7; i++) {
		cin >> a;
		if (a % 2 != 0) {
			vec.push_back(a);
			sum += a;
		}
	}

	if (vec.empty()) cout << -1;
	else {
		cout << sum << '\n';
		cout << *min_element(vec.begin(), vec.end());
	}
}