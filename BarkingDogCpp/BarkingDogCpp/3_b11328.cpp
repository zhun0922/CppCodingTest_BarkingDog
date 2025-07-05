#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[26] = {};
		string value1, value2;
		cin >> value1 >> value2;

		for (auto& it : value1) {
			arr[(int)it - 'a']++;
		}
		for (auto& it : value2) {
			arr[(int)it - 'a']--;
		}
		bool isPossible = true;
		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0) isPossible = false;
		}

		isPossible ? cout << "Possible\n" : cout << "Impossible\n";
	}
}