#include <iostream>
#include <algorithm>

using namespace std;

bool isVisited[101];

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		if (100 - arr[i]) return 1;
		isVisited[arr[i]] = 1;
	}

	return 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
}