#include <iostream>
#include <algorithm>
#include <string>
#include <array>

using namespace std;


int arr[10001] = {};

void insert(int& len, int arr[], int idx, int val) {
	len++;
	for (int i = len; i > idx; i--) {
		arr[i] = arr[i - 1];
	}
	arr[idx] = val;
}

void erase(int& len, int arr[], int idx) {
	len--;
	for (int i = idx; i < len; i++) {
		arr[i] = arr[i + 1];
	}
}

int main() {
	int len = 0;
	insert(len, arr, 0, 4);
}