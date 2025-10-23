#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int sum;
int minV = -1;

int main() {
	int tmp = 0;
	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2 == 1) {
			sum += tmp;
			if (minV == -1 || minV > tmp) {
				minV = tmp;
			}
		}
	}

	if (sum > 0) {
		cout << sum << '\n' << minV;
	}
	else {
		cout << -1;
	}
}