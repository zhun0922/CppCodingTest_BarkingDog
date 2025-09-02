#include <iostream>
#include <algorithm>

using namespace std;

int n, t, target;
int arr[201];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	while (n--) {

		cin >> t;
		arr[t + 100]++;
	}

	cin >> target;
	cout << arr[target + 100];
}