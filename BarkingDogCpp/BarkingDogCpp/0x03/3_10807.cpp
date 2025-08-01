#include <iostream>
#include <algorithm>

using namespace std;

int n, target, result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[100] = {};
	fill(arr, arr + 100, -200);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> target;

	for (auto &it : arr) {
		cout << it;
	}
	cout << result;
	//cout << count(arr, arr+100, target);
}