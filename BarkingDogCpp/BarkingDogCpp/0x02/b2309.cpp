#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int exc1, exc2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr(9);

	for (int i = 0; i < 9; i++) {
		int a = 0;
		cin >> a;
		arr[i] = a;
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				if (k != i && k != j) {
					sum += arr[k];
				}
			}

			if (sum == 100) { exc1 = i; exc2 = j; }
		}
	}

	vector<int> result;

	for (int i = 0; i < 9; i++) {
		if (i != exc1 && i != exc2) {
			result.push_back(arr[i]);
		}
	}

	sort(result.begin(), result.end());

	for (int& a : result) {
		cout << a << '\n';
	}


}