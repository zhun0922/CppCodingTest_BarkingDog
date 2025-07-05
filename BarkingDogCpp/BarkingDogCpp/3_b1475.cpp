#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n, result;
int arr[9];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n; 
	string s = to_string(n);
	for (auto& it : s) {
		if ((int)it - '0' == 9) {
			arr[6]++;
		}
		arr[(int)it - '0']++;
	}

	arr[6] % 2 == 0 ? arr[6] /= 2 : arr[6] = arr[6] / 2 + 1;
	cout << *max_element(arr, arr + 9);

}