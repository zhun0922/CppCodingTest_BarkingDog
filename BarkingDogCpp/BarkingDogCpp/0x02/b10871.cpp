#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n=0, x=0;
	cin >> n >> x;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int v = 0;
		cin >> v;
		arr[i] = v;
		if (arr[i] < x) cout << arr[i] << ' ';
	}
}