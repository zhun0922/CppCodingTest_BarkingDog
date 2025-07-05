#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int arr[3];
int sum;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	for (auto& it : arr) cout << it << ' ';
}