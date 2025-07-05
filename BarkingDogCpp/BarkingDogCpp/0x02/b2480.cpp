#include <iostream>
#include <algorithm>

using namespace std;
int dice[7];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		int x = 0;
		cin >> x;
		dice[x]++;
	}

	int maxCnt = 0;
	int idx = -1;
	for (int i = 1; i < 7; i++) {

		if (dice[i] > maxCnt) {
			idx = i;
			maxCnt = dice[i];
		}
		else if (dice[i] == maxCnt && i > idx) {
			idx = i;
		}
	}

	int result = 0;
	switch (maxCnt) {
	case 1:
		result = idx * 100;
		break;
	case 2:
		result = 1000 + idx * 100;
		break;
	case 3:
		result = 10000 + idx * 1000;
		break;
	}

	cout << result;
}