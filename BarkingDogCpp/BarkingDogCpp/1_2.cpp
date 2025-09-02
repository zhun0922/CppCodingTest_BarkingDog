#include <iostream>

using namespace std;

int func2(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == 100)
				return 1; 
		}
	}

	return 0;
}
int main() {
	int arr[] = {1,2,3,4};
	cout << func2(arr, 4);
}