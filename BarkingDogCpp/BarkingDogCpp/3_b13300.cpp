#include <iostream>
#include <algorithm>

using namespace std;

int n, maxP, result;

int arr[2][6];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> maxP;
	for (int i = 0; i < n; i++) {
		int sex = 0, grade = 0;
		cin >> sex >> grade;

		arr[sex][grade - 1]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			result += arr[i][j] / maxP;
			if (arr[i][j] % maxP != 0) result++;
		}
	}

	cout << result;
}