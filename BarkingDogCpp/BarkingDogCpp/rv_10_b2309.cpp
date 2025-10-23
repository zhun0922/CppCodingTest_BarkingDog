#include <iostream>
#include <algorithm>

using namespace std;

int arr[9];

int main() {
	for (int i = 0; i < 9; i++) {
		int temp = 0;
		cin >> temp;
		arr[i] = temp;
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				if (k != i && k != j) {
					sum += arr[k];
				}
			}
			if (sum == 100) {
		
				for (int n = 0; n < 9; n++) {
					if (n != i && n != j) {
						cout << arr[n] << '\n';
					}
				}
				return 0;
			}
		}
	}
}