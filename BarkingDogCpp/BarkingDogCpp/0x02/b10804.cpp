#include <iostream>

using namespace std;

void swapArr(int arr[], int a, int b) {
	if (b - a == 0) return;
	int i = 0;
	while (a + i <= b - i) {
		int temp = 0;
		temp = arr[a-1+i];
		arr[a-1 + i] = arr[b-1 - i];
		arr[b-1 - i] = temp;
		i++;
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20];
	for (int i = 0; i < 20; i++) {
		arr[i] = i + 1; 
	}
	
	for (int i = 0; i < 10; i++) {
		int a= 0, b = 0;
		cin >> a >> b;
		swapArr(arr, a, b);
		

	}

	for (int a : arr) {
		cout << a << ' ';
	}
}