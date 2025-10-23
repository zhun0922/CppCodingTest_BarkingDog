#include <iostream>
#include <algorithm>

using namespace std;

bool arr[100];

int func2(int b[], int len) {
	for (int i = 0; i < len; i++) {
		if (arr[100 - b[i]]) {
			return 1;
		}
		arr[b[i]] = true;
	}

	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr1[3] = {1,52,48};
	cout << func2(arr1, 3); //1
	
}