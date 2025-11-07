#include <iostream>
#include <algorithm>

using namespace std;

int input;
long long mul = 1;

int arr[10];

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> input;
		mul *= input;
	}

	while (mul > 0) {
		arr[mul % 10]++;
		mul /= 10;
	}

	for (const auto &it : arr) {
		cout << it << '\n';
	}
}