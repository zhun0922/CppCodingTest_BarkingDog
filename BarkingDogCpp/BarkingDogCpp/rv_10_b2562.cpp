#include <iostream>
#include <algorithm>

using namespace std;

int idx;
int maxV;
int input;
int main() {
	for (int i = 1; i <= 9; i++) {
		cin >> input;
		if (maxV < input) {
			maxV = input;
			idx = i;
		}
	}

	cout << maxV << '\n' << idx;
}