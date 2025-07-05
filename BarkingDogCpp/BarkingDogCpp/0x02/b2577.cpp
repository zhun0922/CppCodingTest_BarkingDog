#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long input;
long long mul = 1;
int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		cin >> input;
		mul *= input;
	}

	string sMul = to_string(mul);

	for (auto &s : sMul) {
		arr[static_cast<int>(s) - '0']++;
	}
	
	for (int i : arr) cout << i << '\n';
}